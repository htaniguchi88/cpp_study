#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long x, y, z, a, b, c;
	string A, B, C;

	cin >> A >> B >> C;

	a=0;
	b=0;
	c=0;
	char F;
	F = 'a';

	x=A.size();
	y=B.size();
	z=C.size();

	for(int i=0; i<x+y+z; i++)
	{
		// 添字が指定する要素が文字の長さに達し，かつ次のターンが自分だったらbreak
		if((a==x&F=='a')||(y==b&&F=='b')||(z==c&&F=='c'))
		{
			break;
		}
		if (F=='a')
		{
			F=A[a];
			a++;
		}
		else if(F=='b')
		{
			F=B[b];
			b++;
		}
		else
		{
			F=C[c];
			c++;
		}

		// 最後のFの文字に応じて出力結果を変える
		if(F=='a')
		{
			cout << 'A' << endl;
		}
		else if(F=='b')
		{
			cout << 'B' << endl;
		}
		else {
			cout << 'C' << endl;
		}
	}
}
