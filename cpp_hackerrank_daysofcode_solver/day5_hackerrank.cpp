#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cout << "input number : ";
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// to solve day5 challenge, focus on function below
	for(int i=1; i<=10; i++) {
		cout << n << " x " << i << " = " << n*i << endl;
	}
	// 

	return 0;
}
