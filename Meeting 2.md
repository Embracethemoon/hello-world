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

Input:
```
10
```

Output:
```
10
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

Input:
```
10
```

Output:
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

Input
```

```

Output
```
1.5
x
cp
```

#### Some More Questions:

When there is a space bar in the string, can we still read the string as normal?

Have a test and see how it works.

```cpp
#include <iostream>
using namespace std;
int main(){
	string str;
	cin >> str;
	cout << str << endl;
	return 0;
}
```

Input:
```
Space Bar
```

Output:
```
Space
```

Input:
```
Space
Bar
```

Output:
```
Space
```

From the test, we can discover that, `cin` will stop reading the string when encounter a space bar(or a new line)

What if we want to print a number for 10 times?

Writing cout for 10 times is too much work for us.

```cpp
#include <iostream>
using namespace std;
int main(){
	int a;
	for(int i = 0; i < 10; i++) // i++ is the same as i = i + 1;
		cout << a << endl;
	return 0;
}
```

Input:
```
11
```

Output:
```
11
11
11
11
11
11
11
11
11
11
```

How to write a for loop:
```cpp
for(initialization; condition when it keep executing; update after each loop){
	/* bracket needed if we want to write multiple sentences inside the loop */
}
```

When $ i $starts at 0, when $ i == 9 $, the loop has executed 10 times.

For convenience, we use `for(int i = 0; i < n; i++)` for repetition, when we want the loop to execute $ n $ times

#### Challenge

We want to design a program: when we type in a number $ n $ and a string $ str $ , the program will print the string $ str $ for $ n $ times

Input: There will be 1 number $ n $ and a string $ str $ in same line separated by a space bar

Output: The output should be $ n $ lines with 1 $ str $ in each line.

Reminder: don't print any extra information or words

Sample Input 1:
```
5 Hello
```

Sample Output 1:
```
Hello
Hello
Hello
Hello
Hello
```

Sample Input 2:
```
2 Programming
```

Sample Output 2:
```
Programming
Programming
```

Sample Solution:

```cpp
// leave it Blank for now
// this can be the code of someone in the club
```

#### Coding Challenges Assigned:

Problem Set: https://vjudge.net/contest/421969#overview

You can complete all questions except for the last one.

The last one is not solvable for now, you can read the question and I will talk about it in the next meeting.

This is not mandatory, but completing them can help you have a better understanding of today's material.