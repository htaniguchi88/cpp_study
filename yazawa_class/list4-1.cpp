#include <iostream>
using namespace std;

class Book { //クラスの宣言
private: //変数を直接書き換えることを禁止
	int page;

public:
	int getPage();
	void setPage(int p); //関数を介して変数を書き換えることは許可
};

int Book::getPage() {
	return page;
}

void Book::setPage(int p) {
	if ((p >= 1) && (p <= 1000)) {
		page = p;
	}
	else {
		cout << "1から1000を設定してください！" << endl;
	}
}

int main() {
	Book bk;

	bk.setPage(123);

	cout << bk.getPage() << endl;

	bk.setPage(30000);

	cout << bk.getPage() << endl;

	return 0;
}
