#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, reminder=0, count=0, maxNum=0;
  //maxNum = maximum number of consecutive 1

  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  while (n != 0) {
    reminder = n%2;
    n/=2; //n=n/2

    if (reminder == 1) {
      count++;
    } else {
      count = 0;
    }

    if (count > maxNum) {
      maxNum = count;
    }
  }
  cout << maxNum << endl;
 
  return 0;
}
