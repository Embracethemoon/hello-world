### Meeting 2

#### Loops

In C++, there are two ways to write loops in a program.

Firstly, we can use `for` to create a loop for certain times

```cpp
#include <iostream>
using namespace std;
int main(){
	for(int i = 0; i < 10; i ++ )
		cout << i << endl;
	return 0;
}
```

Secondly, we can use `while`, when we don't know exactly how many times to loop.

```cpp
#include <iostream>
using namespace std;
int main(){
	int i = 0;
	while(i < 10){
		cout << i << endl;
		i ++ ;
	}
	return 0;
}
```

We can nest up the loops when we want the program to execute for multiple times:

```cpp
#include <iostream>
using namespace std;
int main(){
	for(int i = 0; i < 10; i ++ )
		for(int j = 0; j < 10; j ++ )
			cout << i << " " << j << endl;
	return 0;
}
```

#### Array

When we want to store multiple elements together, we can use an array

```cpp
#include <iostream>
using namespace std;
int main(){
	int array[] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; i ++ )
		cout << array[i] << endl;
	return 0;
}
```

Also, we can create 2d array

the first dimension is row, the second dimension is column

For example, if the array is

1	2	3

11	12	13

21	22	23

then, the number 3 is at row 0 column 2
(the index of an array starts from 0)

```cpp
#include <iostream>
using namespace std;
int main(){
	int array[][] = {
		{1, 2, 3},
		{11, 12, 13},
		{21, 22, 23}
	};
	for(int i = 0; i < 3; i ++ ){
		for(int j = 0; j < 3; j ++ ){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
```

#### String

String is sort of like a array of characters.

Similar to how we access an element in an array, we can access a char of the string using [].

```cpp
#include <iostream>
using namespace std;
int main(){
	string str = "Testing";
	cout << str[0] << endl;
	return 0;
}
```

In C++, string also have some functions built in.

`str.length()`: returns the length of a string.

`str.substring(index, len)`: returns a substring from the starting index with given length.

`str.substring(index)`: returns a substring from the starting index to the end of the string.

`str.find(str2)`: find out the first occurance of str2 in str. (returns string::npos, which is -1)

```cpp
// the program is too long
```