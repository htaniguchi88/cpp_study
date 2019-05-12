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

void rewrite_number (int* to_rewrite_number) {
	*to_rewrite_number = 1000;
}

int main() {
	int input_number;
	int number;
	int* to_rewrite_number;

	number = 1;
	to_rewrite_number = &number;

	// cout << "数字を入力して下さい" << endl;
	// cin >> input_number;

	// showInt(input_number);

	rewrite_number(to_rewrite_number);

	cout << *to_rewrite_number << endl;

}
