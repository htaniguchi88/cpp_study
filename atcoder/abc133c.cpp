#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, A, B;

	cin >> N >> A >> B;

	cout << min(N * A, B) << endl;
}
