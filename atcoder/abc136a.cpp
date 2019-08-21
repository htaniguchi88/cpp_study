#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	vector<int> V;

	cin >> N;

	for (int i=1; i<=N; ++i)
	{
		int x;
		cin >> x;
		V.push_back(x);
	}

	for (int i=1; i<V.size(); ++i)
	{
		if (V[i] < V[i-1] || V[i] -1 < V[i])
		{
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";
	return 0;
}
