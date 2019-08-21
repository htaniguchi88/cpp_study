#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
  ios::sync_with_stdio(false);

	int32_t P, Q, R;

	cin >> P >> Q >> R;

	vector<int32_t> v={P+Q, Q+R, R+P};

	int32_t min = *std::min_element(v.begin(), v.end());

	cout << min << endl;
}
