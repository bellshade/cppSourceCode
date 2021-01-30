#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,i,j; //testcase
	string S; //given string

	cout << "number of test case : "; cin >> T;

	for(i=0; i < T; i++) {
	cin >> S; // input string

		for(j=0; j < S.length(); j++) {
			if (j%2 == 0) { //even index
				cout << S[j];
			}
		}

		cout << " ";
		for(j=0; j < S.length(); j++) {
			if(j%2 != 0) { //odd index
				cout << S[j];
			}
		} 
		cout << endl;
	}

	return 0;
}
