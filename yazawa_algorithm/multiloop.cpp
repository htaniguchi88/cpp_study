#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
  ios::sync_with_stdio(false);

	for (int step=1; step<10; ++step) {
		cout << step << "の段 : ";
		for (int num=1; num<10; ++num) {
			cout << step * num << " ";
		}
		cout << "\n";
	}
}
