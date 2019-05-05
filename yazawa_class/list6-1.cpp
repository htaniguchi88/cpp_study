#include <iostream>
using namespace std;

class MyClass {
public:
	void func1(int a);
	virtual void func2(const char *s);
};

void MyClass::func1(int a) {
	cout << a << endl;
}

void MyClass::func2(const char *s) {
	cout << s << endl;
}

class NewClass : public MyClass {
public:
	void func2(const char *s);
};

void NewClass::func2(const char *s) {
	cout << "文字列データ:";
	cout << s << endl;
}

int main() {
	MyClass obj;

	obj.func1(123);

	obj.func2("技術評論社");

	return 0;
}
