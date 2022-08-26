#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int Pscore = 0, Cscore = 0;

int computerChoice() {
	srand(time(NULL));
	int num = rand() % 3; 
	if (num == 0) {
		cout << "The computer gave out Rock"<<"\n";
	}
	else if (num == 1) {
		cout << "The computer gave out Paper" << "\n";
	}
	else {
		cout << "The computer gave out Scissors" << "\n";
	}
	return num;
}

void checkWin(int num, int cNum) {
	if (num == cNum) {
		cout << "It' a tie!" << "\n";
	}
	else if ((num == 0 && cNum == 1) || (num == 1 && cNum == 2) || (num == 2 && cNum == 0)) {
		cout << "Computer win" << "\n";
		Cscore++;
	}
	else {
		cout << "Congratuation! You win!!" << "\n";
		Pscore++;
	}
}

void Score() {
	cout << "///////////////////" << "\n";
	cout << "Score Board" << "\n";
	cout << "You: " << Pscore << " Computer: " << Cscore << "\n";
	cout << "///////////////////" << "\n\n";
}


int main() {
	int num, check = 1, cNum;

	cout << "####################" << "\n";
	cout << "Rock Paper Scissors" << "\n";
	cout << "Rock(0)" << "\n";
	cout << "Paper(1)" << "\n";
	cout << "Scissors(2)" << "\n";
	cout << "End(3)" << "\n";
	cout << "####################" << "\n\n";

	while (check) {
		cout << "-> ";
		cin >> num;

		switch (num) {
			case 0:
				cout << "You chose Rock" <<"\n";
				cNum = computerChoice();
				checkWin(num, cNum);
				Score();
				break;
			case 1:
				cout << "You chose Paper" << "\n";
				cNum = computerChoice();
				checkWin(num, cNum);
				Score();
				break;
			case 2:
				cout << "You chose Scissors" << "\n";
				cNum = computerChoice();
				checkWin(num, cNum);
				Score();
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