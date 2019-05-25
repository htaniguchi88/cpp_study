#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> data{2, 68, 92, 88, 41, 53, 97, 84, 39, 55};
	int x, pos;
	size_t i;

	pos = -1;
	x = 55;

	for (i=0; i<data.size() && pos == -1; i++) {
		if (data[i] == x) {
			pos = i;
			cout << pos << endl;
		}
	};

	cout << pos << endl;
}
