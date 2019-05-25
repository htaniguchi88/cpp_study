#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> data{2, 68, 92, 88, 41, 53, 97, 84, 39, 55};
	size_t i;
	int pos=-1;
	data.push_back(97);
	int x = data.size()-1;

	for (i=0; data[i] != data[x]; i++) {
			pos = i;
	};
	pos++;

	cout << pos << endl;
}
