#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    vector<int> V;
    int A;

    cin >> N;

    for(int i=0; i<N; ++i)
    {
        cin >> A;
        V.push_back(1/A);
    }

    int sum = accumulate(V.begin(), V.end(), 0);

    cout << 1/sum << endl;

    return 0;

}
