#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

    int A, B;

    cin >> A >> B;

    cout << max(A*B, max(A+B, A-B)) << endl;

    return 0;
}
