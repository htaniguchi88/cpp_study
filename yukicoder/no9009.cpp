#include <iostream>
#include <vector>
using namespace std;

int main() {
	long input;
	vector<long> number;
	long sum;

	cin >> input;

	number.resize(input);

	for (size_t i = 0; i < input; i++) {
		cin >> number[i];
	};

	for (size_t i = 0; i < number.size(); i++) {
		sum += number[i];
	};

	cout << sum << endl;
}
