#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
	int number;
	char name[80];
	int salary;
	void showData();
};

void Employee::showData() {
	cout << number << endl;
	cout << name << endl;
	cout << salary << endl;
}

class MySample {
public:
	void useObject(Employee *obj);

	Employee* retObject();
};

void MySample::useObject(Employee *obj) {
	obj->showData();
}

//Employeeクラスのオブジェクトを作成し，メンバに値を代入したあと，オブジェクトのポインタを返す関数
Employee* MySample::retObject() {
	static Employee obj;
	obj.number = 1234;
	strcpy(obj.name, "たにぐちひろ");
	obj.salary = 500;

	return &obj;
}

int main() {
	Employee *someone;
	MySample ms;

	someone = ms.retObject();

	ms.useObject(someone);

	return 0;
}
