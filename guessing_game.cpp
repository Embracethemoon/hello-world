/* ***********************************************
Author        :zqsml
Created Time  :Tue 06 Apr 2021 10:22:17 PM PDT
File Name     :guessing_game.cpp
************************************************ */

#include <bits/stdc++.h>
using namespace std;

int readInt(){
	int foo{};
	cout << "Enter a number: ";
	cin >> foo;
	return foo;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

	int target{rand() % 100 + 1};
	int guess{};
	int chances{9};
	cout << "Guessing Game\nCreated by Kevin Miao\n\n";
	while(chances--){
		guess = readInt();
		while(guess > 100 || guess < 1){
			guess = readInt();
		}
		if(guess > target){
			cout << "Too big! " << chances << " chances left.\n\n";
		}
		else if(guess < target){
			cout << "Too small! " << chances << " chances left.\n\n;
		}
		else if(guess == target){
			cout << "Bingo!\n" << "Your score is " << chances << '\n';
			break;
		}
	}
    
    return 0;
}
