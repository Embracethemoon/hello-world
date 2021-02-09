#include <iostream>

using namespace std;

int main(){
	int n, foo;
	cin >> n;
	while(n--){
		cin >> foo;
		cout << foo;
		if(foo % 2 == 0)
			cout << " is even" << endl;
		else
			cout << " is odd" << endl;
	}
	return 0;
}
