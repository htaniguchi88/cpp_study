#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, K, X, Y;

	int acount;

	cin >> N >> K >> X >> Y;

	cout << X * (N-Y) + Y * K << endl;
}
