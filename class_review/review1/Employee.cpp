#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

void Employee::showData() {
	cout << "社員番号: " << number << endl;
	cout << "氏名: " << name << endl;
	cout << "給与: " << salary << endl;
	cout << "一言コメント: " << comment << endl;
};

void Employee::showHeader() {
	cout << "-社員情報-" << endl;
}

void Engineer::showAllData() {
	Employee::showData();
	cout << "プログラミング言語: " << language << endl;
	cout << "***************************************" << endl;
}

void Engineer::showAllData(int sabbatical, int bonus) {
	Employee::showData();

	int additional_commit = sabbatical * bonus;
	cout << "サバティカルとボーナスを与えることによる追加的なコミット:" << additional_commit << endl;
	cout << "***************************************" << endl;
}

void Engineer::showHeader() {
	cout << "-社員情報-" << endl;
	cout << "エンジニア" << endl;
}
