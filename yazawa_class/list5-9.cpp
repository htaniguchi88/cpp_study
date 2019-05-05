#include <iostream>
using namespace std;

class MyClass {
public:
	int my_data;
	MyClass();
	MyClass(int m);
	~MyClass();
};

MyClass::MyClass() {
	my_data = -1;
	cout << "基本クラスの引数がないコンストラクタが呼び出されたよ!!" << endl;
}

MyClass::MyClass(int m) {
	my_data = m;
	cout << "基本クラスの引数をもつコンストラクタが呼び出されたよ!!" << endl;
}

MyClass::~MyClass() {
	cout << "基本クラスのデストラクタが呼び出されたよ!!" << endl;
}

class NewClass : public MyClass {
public:
	int new_data;
	NewClass();
	NewClass(int n, int m);
	~NewClass();
};

NewClass::NewClass() {
	new_data = -1;
	cout << "派生クラスの引数のないコンストラクタが呼び出されました！" << endl;
}

NewClass :: NewClass(int n, int m) : MyClass(m) {
	new_data = n;
	cout << "派生クラスの引数をもつコンストラクタが呼び出されました" << endl;
}

NewClass::~NewClass() {
	cout << "派生クラスのデストラクタが呼び出されました" << endl;
}

int main() {
	NewClass obj1;

	cout << obj1.my_data << endl;
	cout << obj1.new_data << endl;
	cout << "***************" << endl;

	NewClass obj2(123, 456);

	cout << obj2.my_data << endl;
	cout << obj2.new_data << endl;

	return 0;
}
