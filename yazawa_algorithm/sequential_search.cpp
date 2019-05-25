#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> data{2, 68, 92, 88, 41, 53, 97, 84, 39, 55};
	size_t i;
	int pos=-1;

	data.push_back(97);

	for (i=0; i<data.size(); i++) {
		if (data[i] == data[10]) {
			pos = i;
			break;
		}
	};

	cout << pos << endl;
}
