### Meeting 2

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

Output:
```
15
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

Output:
```
35
```

In C++, we use `cin` and `cout` to read user's input and print output to the screen
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

Input:
```
10
```

Output:
```
10
```

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
}
```

Input:
```
10
```

Output will be:
```
1
```

Input:
```
5
```

Output:
```
-1
```