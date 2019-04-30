#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define GU 0
#define CHOKI 1
#define PA 2

#define WIN 0
#define LOSE 1
#define DRAW 2

class User {
	private:
		int hand;
	public:
		void setHand();
		int getHand();
};

void User::setHand() {
	cout << "0:グー，1:チョキ，2:パー" << endl;
	cout << "ユーザーの手を選んでください=";
	cin >> hand;
}

int User::getHand() {
	return hand;
}

class Computer {
	private:
		int hand;
	public:
		void setHand();
		int getHand();
};

void Computer::setHand() {
	hand = rand() % 3;
}

int Computer::getHand() {
	cout << "コンピューターの手=" << hand << endl;
	return hand;
}

class Judge {
	private:
		int judge;
	public:
		void doJudge(User u, Computer c);
		void showJudge();
};

void Judge::doJudge(User u, Computer c) {
	cout << "これはdoJudgeです" << endl;
	int user, computer;

	user = u.getHand();
	computer = c.getHand();
	if (user == computer) {
		judge = DRAW;
	}
	else if ((user == GU && computer == CHOKI) ||
					 (user == CHOKI && computer == PA) ||
					 (user == PA && computer == GU)) {
		judge = WIN;
	}
	else {
		judge = LOSE;
	}
}

void Judge::showJudge() {
	cout << "これはshowJudgeです" << endl;
	if(judge == WIN) {
		cout << "ユーザーの勝ちです！" << endl;
	}
	else if (judge == LOSE) {
		cout << "ユーザーの負けです！" << endl;
	}
	else if (judge == DRAW) {
		cout << "引き分けです！" << endl;
	}
}

int main() {
	User user;
	Computer computer;
	Judge judge;

	srand(time(NULL));

	user.setHand();

	computer.setHand();

	judge.doJudge(user, computer);

	judge.showJudge();

	return 0;
}
