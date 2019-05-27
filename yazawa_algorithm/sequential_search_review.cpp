#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
			ios::sync_with_stdio(false);

	int a[] = {5, 50, 3, 6, 4, 9, 10, 11, 15, 2};
	int pos = -1;

	int a[10] = 15;

	for (int i=0; i<=9 and pos== -1; i++){
		if (a[i]==x){
			pos = i;
		}
	}

	cout << pos << "\n";

	return 0;
}
