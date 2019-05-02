#include <iostream>
using namespace std;

class MyMath { //2つのメンバ関数をもつMyMathクラスの定義。関数のオーバーロードを行っている。
public:
	int twice(int a);
	double twice(double a);
};

int MyMath::twice(int a) {
	return a * 2;
}

double MyMath::twice(double a) {
	return a * 2;
}

int main() {
	MyMath obj; //MyMathクラスのオブジェクトの作成
	int a;
	double b;

	a = obj.twice(123);
	cout << a << endl;
	b = obj.twice(3.14);
	cout << b << endl;

	return 0;
}
