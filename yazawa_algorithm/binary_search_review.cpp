#include <bits/stdc++.h>
using namespace std;

int main(){
cin.tie(0);
   	ios::sync_with_stdio(false);

	int x = 92;

	int a[] = {39, 41, 53, 55, 68, 72, 84, 88, 92, 97};
	int left, middle, right, pos;

	pos = -1;
	right = 9;
	left = 0;

	while (pos== -1 and left<right){
		middle = (left+right)/2; /*right, leftの値が書き換わるのにともなってmiddleを書き換えなければならない!*/
		if (x==a[middle]){
			pos = middle;
		} else if (x<=a[middle]) {
			right = middle-1;
		} else {
			left = middle+1;
		}
	}

	cout << pos << "\n";

}
