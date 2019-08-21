#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double ans = v[0];
    for(int i= 1; i < n; ++i) ans = (ans+v[i])/2;
    printf("%.10f\n", ans);
    return 0;
}
