#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
  ios::sync_with_stdio(false);

	int32_t A, B, C, five, seven;

	cin >> A >> B >> C;

	vector<int32_t> v;

	v.push_back(A);
	v.push_back(B);
	v.push_back(C);

	for (size_t i=0; i<v.size(); ++i){
		 if (v[i]==5)
		 {
			 ++five;
		 } else if (v[i]==7)
		 {
			 ++seven;
		 }

		 if (five == 2 and seven==1)
		 {
			 cout << "YES" << "\n";
		 } else {
			 cout << "NO" << "\n";
		 }
	}
}

/* rishup132

map <int,int> m;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

	  m[a]++;
    m[b]++;
    m[c]++;

    if(m[5] == 2 && m[7] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

 */

/* firiexp
int main() {
    int a, b, c;
    int x;
    cin >> a >> b >> c;
    x = (a == 7) + (a == 5)*10  + (b == 7) + (b == 5) * 10  + (c == 7) + (c == 5)*10;
    if (x == 21) cout << "YES";
    else cout << "NO";
}


 */
