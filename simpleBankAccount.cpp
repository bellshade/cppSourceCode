#include <iostream>
using namespace std;

typedef unsigned long ulong;

class bankAccount {
  private:
  int accountID;
  string name;

  public:
  void setAccountID(int a) {
    accountID = a;
  }
  int getAccoundID() {
    return accountID;
  }

  void setName(string b) {
    name = b;
  }
  string getName() {
    return name;
  }

  ulong balance;
};

class whatsUp {
  private:
  string name;
  
  public:
  whatsUp(string nm) {
    setName(nm);
  }

  void setName(string a) {
    name = a;
  }
  string getName() {
    return name;
  }

};

int main() {
  bankAccount user1, user2;
  whatsUp obj1("Alpha");
  whatsUp obj2("Beta");
  whatsUp obj3("Charlie");
  
  cout << obj1.getName() << endl;
  cout << obj2.getName() << endl;
  cout << obj3.getName() << endl << endl;

  user1.setAccountID(12345);
  user1.balance = 7000000;
  user1.setName("Quentin Tarantino");

  user2.setAccountID(98765);
  user2.balance = 12000000;
  user2.setName("James Wann");

  cout << "Nama    : " << user1.getName() << endl;
  cout << "ID Akun : " << user1.getAccoundID() << endl;
  cout << "Saldo   : " << user1.balance << endl << endl;

  cout << "Nama    : " << user2.getName() << endl;
  cout << "ID Akun : " << user2.getAccoundID() << endl;
  cout << "Saldo   : " << user2.balance << endl;

	return 0;
}