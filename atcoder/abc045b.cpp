#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	vector<string> turn_cards;
	string SA, SB, SC;

	turn_cards.push_back(SA);
	turn_cards.push_back(SB);
	turn_cards.push_back(SC);

	cin >> SA >> SB >> SC;

	int i;

	for (int j=0; j<100; ++j)
	{
		if (turn_cards[i][j] == 'a')
		{
			i = 0;
		} else if (turn_cards[i][j] == 'b') {
			i = 1;
		} else {
			i = 2;
		}
	}

}
