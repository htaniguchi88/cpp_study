#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
  ios::sync_with_stdio(false);

	int32_t N, X, I;
	int32_t count=0;

	cin >> N >> X;

	vector<int32_t> D;

	D.push_back(0);

	for (size_t i=1; i<N+1; ++i)
	{
		cin >> I;
		D.push_back(D[i-1]+I);
	}

	for (size_t i=0; i<D.size(); ++i)
	{
		if(D[i]<=X)
		{
			count++;
		}
	}

	cout << count;

}
