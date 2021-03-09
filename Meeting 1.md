### Meeting 1

#### Variable and Expression:

Variables can be described as boxes which store values in them.

```cpp
#include <iostream>
using namespace std;
int main(){
	int a = 15;
	cout << a << endl;
	return 0;
}
```

In C++, we can write some simple expressions.
```cpp
#include <iostream>
using namespace std;
int main(){
	int a = 15;
	int b = 20;
	int c = a + b;
	cout << c << endl;
	return 0;
}
```

#### Input and Output

In C++, we use `cin` and `cout` to read user's input and print output to the screen

`cin` for reading input, and `cout` for printing output

```cpp
// Example 1
#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	cout << a << endl;
	return 0;
}
```

#### Conditioning: if & else

In C++, we can use`if` and `else` to create logical conditioning.

For example, we want to output b when a equals 10, otherwise, we output -1

We can do it through the following codes
```cpp
#include <iostream>
using namespace std;
int main(){
	int a;
	int b = 1;
	cin >> a;
	if(a == 10)	// we use '==' to represent equals in C++
		cout << b << endl;
	else
		cout << -1 << endl;
	return 0;
}
```

There are also other types of variables:

Also mind that char use single quote mark `char c = 'x';` while string uses double quote mark `string d = "cp";`

**endl** means **end** of the **l**ine

In C++, we use `endl`to start a new line when we are printing output

```cpp
#include <iostream>
using namespace std;
int main(){
	double b = 1.5;	// floating-point number
	char c = 'x';	// a single character
	string d = "cp";	// a string
	cout << b << endl << c << endl << d << endl;
}
```
