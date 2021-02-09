#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(s[0] == 'P') cout << "skipped" << endl;
		else{
			int i = 0;
			int a = 0, b = 0;
			int m = s.size();
			while(s[i] != '+'){
				a *= 10;
				a += s[i] - '0';
				i++;
			}
			if(s[i] == '+') i++;
			while(i < m && s[i] != '+'){
				b *= 10;
				b += s[i] - '0';
				i++;
			}
			cout << a + b << endl;
		}
	}
	return 0;
}
