#include <iostream>
#include <vector>
using namespace std;

class Player {
	public:
		int input;
		vector<int> number;
		void printVector(vector<int> const &num);
};

void Player::printVector(vector<int> const &num) {
	cout << "[ ";
	for(int j=0; j < num.size(); j++) {
		cout << num.at(j) << " ";
	}
	cout << "]";
}

int p1_score = 0, p2_score = 0; //to compare both player numbers

vector<int> vsNumber(vector<int> a,vector<int> b) {
	int i = 0;

	for(i = 0; i < a.size(); i++) {
		if(a[i] > b[i]) {
			p1_score++;
		} else if(a[i] < b[i]) {
			p2_score++;
		}
	}
	return vector<int>({p1_score, p2_score}); 
}

void finalResults () { // print the winner
  if (p1_score > p2_score) {
    cout << "Player 1 WIN the Battle\n";
  } else if (p1_score < p2_score) {
    cout << "Player 2 WIN the Battle\n";
  } else if (p1_score == p2_score) {
    cout << "Battle Result is DRAW\n";
  }
}

int main() {
	Player p1, p2;
	int j, number_used;

	system("clear");  // to clear/reset the terminal on linux & unix. on windows, use system("cls");
	cout << ">> Number Battle <<" << endl;
	cout << "====================\n";  // \n = endl
	cout << "number that u've input will stored in a vector,\n";
	cout << "and then it will compared against other player's number\n";
	cout << "=========================================================\n\n";

	cout << "How much number to used for battle ? : "; cin >> number_used;
	cout << "\n>> Player 1 Turn <<" << endl;
	for(j=0; j < number_used; j++) {
		cout << "number for index[" << j << "] : ";
		cin >> p1.input;
		p1.number.push_back(p1.input);
	}

	cout << "\n>> Player 2 Turn <<" << endl;
	for(j=0; j < number_used; j++) {
		cout << "number for index[" << j << "] : ";
		cin >> p2.input;
		p2.number.push_back(p2.input);
	}

	cout << endl;
	cout << "<< Player 1 Number >> " << endl;
	p1.printVector(p1.number);

	cout << "\n\n<< Player 2 number >>" << endl;
	p2.printVector(p2.number);

  cout << "\n\n== Final Result ==" << endl;
  vector<int> result = vsNumber(p1.number, p2.number);

  cout << "[ ";
	for (j = 0; j < result.size(); j++) {
		cout << result[j] << " ";
	}
  cout << "]" << endl;
  finalResults();

	return 0;
}