#include<iostream>

using namespace std;






int main() {

	int num, check = 1;

	cout << "Rock Paper Scissors" << "\n";
	cout << "Rock(0)" << "\n";
	cout << "Paper(1)" << "\n";
	cout << "Scissor(2)" << "\n";
	cout << "End(3)" << "\n";

	while (check) {
		cout << "-> ";
		cin >> num;

		switch (num) {
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				check = 0;
				break;
			default:
				cout << "Choose the right number to play game" << "\n";
				break;
		}


	}

	return 0;
}