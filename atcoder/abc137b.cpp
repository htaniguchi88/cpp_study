#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

    long K, X;

    cin >> K >> X;

    for(int i= X-K+1; i<=X; ++i)
    {
        cout << i << endl;
    }

    for(int i= X; i<=X+K-1; ++i)
    {
        cout << i << endl;
    }

    return 0;

}
