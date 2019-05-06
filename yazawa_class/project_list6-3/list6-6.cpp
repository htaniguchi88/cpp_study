#include <iostream>
#include "Company.h"
using namespace std;

int main() {
  Employee *p[6];

	Director y(1111, "役員一郎", 500, 1000);
	p[0] = &y;
	Manager b1(2222, "課長一郎", 350, 10000);
	p[1] = &b1;
	Manager b2(3333, "課長次郎", 300, 5000);
	p[2] = &b2;
	Salesman e1(4444, "営業一郎", 230, 1235);
	p[3] = &e1;
	Salesman e2(5555, "営業次郎", 250, 4567);
	p[4] = &e2;
	Salesman e3(6666, "営業三郎", 270, 6789);
	p[5] = &e3;

	for (int i = 0; i < 6; i++) {
		p[i]->showData();
		cout << "*****************" << endl;
	}

	return 0;

}
