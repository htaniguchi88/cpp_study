#include <bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {90, 34, 78, 12, 56};
	int ins, cmp, temp;

	for (ins = 1; ins < 5; ++ins){
		//挿入する値を一時退避
		temp=a[ins];
		for (cmp=ins-1; cmp>=0; --cmp){
			// もし一時退避した挿入する値よりも左側の比較対象が大きければ挿入する値の位置に比較対象を代入する
			if (a[cmp] > temp){
				a[cmp + 1] = a[cmp];
			} else {
				break;
			}
		}
		a[cmp + 1] = temp;
	}

	for (int i=0; i<=4; ++i){
		cout << a[i] << endl;
	}

}
