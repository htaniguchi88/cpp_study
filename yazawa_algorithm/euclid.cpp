#include <iostream>
using namespace std;

int main(){
		cin.tie(0);
   	ios::sync_with_stdio(false);

		int a, b;

		cin >> a;
		cin >> b;

		while (a!=b) {
			if (a > b) {
				a = a-b;
			} else {
				b = b-a;
			}
		}

		cout << a << "\n";
}
