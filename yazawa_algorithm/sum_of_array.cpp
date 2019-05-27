#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum=0;
	cout << sum << endl;

	for (size_t i=0; i<data.size(); i++) {

		sum += data[i];
		cout << sum << endl;

	};

	return sum;
}
