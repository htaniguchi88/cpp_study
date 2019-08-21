#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, D;

	cin >> N >> D;

	vector<vector<int>> vector2d;

	for (int i=0; i<N; ++i)
	{
		vector<int> vector1d;
		vector2d.push_back(vector1d);
		for (int j=0; j<D; ++j)
		{
			int number;
			cin >> number;
			vector1d.push_back(number);
		}
	}

	int good_distance=0;

	for (int i=0; i<N; ++i)
	{
		for (int j=1; j<N; ++j)
		{
			double root_distance=0;
			for (int k=0; k<D;++k)
			{
				cout << vector2d[j][k] << endl;
				// int add;
				// add = vector2d[i][k]-vector2d[j][k];
				// root_distance += (double)add;
			}
			// double sq = sqrt(root_distance);
			// if (ceil(sq) != floor(sq))
			// {
			// 	++good_distance;
			// }
		}
	}

	cout << good_distance << endl;

}
