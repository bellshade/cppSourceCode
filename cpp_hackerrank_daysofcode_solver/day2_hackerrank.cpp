#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) { 
  double tip, tax, total_cost;

  tip = (meal_cost * tip_percent)/100;
  tax = (meal_cost * tax_percent)/100;
  total_cost = meal_cost + tip + tax;

  cout << "calculations" << endl;
  cout << "tip = meal cost * tip percent/100" << " = " << tip << "$" << endl;
  cout << "tax = meal cost * tax percent/100" << " = " << tax << "$" << endl;
  cout << "total cost = meal cost + tip + tax" << endl;

  cout << endl; 
  cout << "= " << meal_cost << " + " << tip << " + " << tax << " = " << total_cost << "$" << endl;
  cout << "total cost(rounded) = " << round(total_cost) << "$" << endl;
}

int main() {
  cout << "Total Meal Cost" << endl << endl;

  double meal_cost;
  cout << "meal cost($) : "; cin >> meal_cost;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int tip_percent;
  cout << "tip percent(%) : "; cin >> tip_percent;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int tax_percent;
  cout << "tax percent(%) : "; cin >> tax_percent;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << endl;

  solve(meal_cost, tip_percent, tax_percent);

  return 0;
}
