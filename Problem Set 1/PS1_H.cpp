#include <iostream>

using namespace std;

int main(){
	string month;
	int date;
	cin >> month >> date;
	if(month == "OCT" && date == 31)
		cout << "yup" << endl;
	else if(month == "DEC" && date == 25)
		cout << "yup" << endl;
	else
		cout << "nope" << endl;
	return 0;
}
