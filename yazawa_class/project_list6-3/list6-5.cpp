#include <iostream>
#include "Company.h"
using namespace std;

int main() {
	Director d(1111, "役員一郎", 500, 100);
	Manager m1(2222, "課長一郎", 350, 100);
	Manager m2(3333, "課長次郎", 300, 500);
	Salesman s1(4444, "営業一郎", 230, 1235);
	Salesman s2(5555, "営業次郎", 250, 4567);
	Salesman s3(6666, "営業三郎", 270, 6789);

	d.showData();
	cout << "***********************" << endl;
	m1.showData();
	cout << "***********************" << endl;
	m2.showData();
	cout << "***********************" << endl;
	s1.showData();
	cout << "***********************" << endl;
	s2.showData();
	cout << "***********************" << endl;
	s3.showData();
	cout << "***********************" << endl;

	return 0;

}
