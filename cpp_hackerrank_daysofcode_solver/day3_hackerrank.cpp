#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  cout << "Input Number : ";
  cin >> N; //N=Number
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Inputted Number : " << N << endl;
  if(N%2 == 1) { //if odd
    cout << N << " = Weird\n";
  } else if(N%2 == 0 && N >=2 && N<= 5) { //if even and in range of 2-5
    cout << N << " = Not Weird\n";
  } else if(N%2 == 0 && N >= 6 && N <= 20) { //if even and in range of 6-20
    cout << N << " = Weird\n";
  } else if(N%2 == 0 && N > 20) { //if even and greater than 20
    cout << N << " = Not Weird\n";
  }
  return 0;
}
