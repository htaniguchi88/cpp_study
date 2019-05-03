#include <iostream>
#include <cmath>
using namespace std;

class SimpleMath {
//2次方程式の解の公式のルートの中の計算
private:
	double tempCalc(double a, double b, double c);

public:
	bool quadratic(double a, double b, double c, double *x1, double *x2);
};

bool SimpleMath::quadratic(double a, double b, double c, double *x1, double *x2) {

	double temp;

	temp = tempCalc(a, b, c);
	if (temp < 0) {
		return false;
	}
	else {
		*x1 = (-b + sqrt(temp) / (2 * a));
		*x2 = (-b - sqrt(temp) / (2 * a));
		return true;
	}
}

double SimpleMath::tempCalc(double a, double b, double c) {
	return b * b - 4 * a * c;
}

int main() {
	SimpleMath sm;
	double x1, x2;

//2次方程式の解を求める
	if (sm.quadratic(3, 10, 7, &x1, &x2) == true) {
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else {
		cout << "解なし" << endl;
	}
	return 0;
}
