#include <cstring>
#include <iostream>
using namespace::std;

// int add(int a, int b) {
// 	int c = a + b;
// 	return c;
// }

void showInt(int x) {
	cout << "入力した数字は" << x << endl;
}

int main() {
	int input_number;

	cout << "数字を入力して下さい" << endl;
	cin >> input_number;

	showInt(input_number);

}
