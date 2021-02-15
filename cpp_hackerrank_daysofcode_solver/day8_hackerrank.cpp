#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*solve cpp day 8 hackkerank challenge
  using vector and map*/
int main() {
  int i, n; // n = number of entries in the phone book
  long phoneNum;
  string name, searchName;
  vector<string> key_name; //key
  vector<long> value_num; //value
  map<string,long> phoneBook; //phonebook maps

  cin >> n;
  cin.ignore();

  for(i = 0; i < n; i++) {
    cin >> name;
    cin >> phoneNum;
    key_name.push_back(name);
    value_num.push_back(phoneNum);

    phoneBook[key_name.at(i)] = int(value_num.at(i));
  }

  while(cin >> searchName) {
    if (phoneBook.count(searchName) == 1) {
      cout << searchName << "=" << phoneBook[searchName] << "\n";
    } else {
      cout << "Not found\n";
    }
  }   
  
  return 0;
}

/*
i use vector cause i want to learn about it
if u don't wanna use vector and like more simple code, use my another code below

int n;
  string name;
  long num;

  cin >> n;
  cin.ignore();
  map <string, long> phoneBook;

  for (int i = 0; i < n; i++) {
    cin >> name;
    cin >> num;
    phoneBook[name] = num;
  }
  while(cin >> name) {
    if (phoneBook.find(name) != phoneBook.end()) { //if not end, then name found
      cout << name << "=" << phoneBook.find(name)->second << endl; //key->value
    } else {
      cout << "Not found" << endl;
    }
  }
*/
