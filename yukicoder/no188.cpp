#include "bits/stdc++.h"
using namespace std;
#define MAX 999999

int main() {
	// 月ごとの日数は、配列に埋め込んじゃう
	int day[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	// 答えのカウンター
	int ans = 0;
	// 1〜12月
	for (int i = 0; i < 12; i++)
	{
		// 日にち
		for (int j = 0; j < day[i]; j++)
		{
			// 月の数字と，日にちを10で割った余り(1の位)と日にちを10で割った商(10の位)の和を比較
			if (i + 1 == j % 10 + (j / 10)) ans++;
		}
	}
	cout << ans << endl;
}
