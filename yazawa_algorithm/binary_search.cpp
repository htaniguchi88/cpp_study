#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {39, 41, 53, 55, 68, 72, 84, 88, 92, 97};
	int x, pos, left, right, middle;

	x = 53;
	pos = -1;
	left = 0;
	right = 9;

	while (pos == -1 and left <= right) {
		middle = (left + right)/2;
		if (a[middle] == x) {
			pos = middle;
		} else if (a[middle] > x){
				right = middle-1;
		} else {
				left = middle+1;
		}

	cout << pos << endl;
	}
}
