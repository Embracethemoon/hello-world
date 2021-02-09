#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	double a, b, sum;
	sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		sum += a * b;
	}
	printf("%.3lf\n", sum);
	return 0;
}
