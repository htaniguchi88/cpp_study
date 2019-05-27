#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	int shop_nubmer;
	string str;
	int score;
	multimap<string, int> mp;
	pair<string, int >p;

	cin >> shop_nubmer;

	for (int i=1; i<=shop_nubmer; i++){
			cin >> str;
			cin >> score;
			p.first = str;
			p.second = score;
			mp.insert(p);
	}

	string _str;

	cout << "探したいデータは" << endl;

	cin >> _str;

	cout << mp[_str] << "\n";

}
