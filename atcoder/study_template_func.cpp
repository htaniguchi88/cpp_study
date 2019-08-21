#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

template<typename T>
void write(T a);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    write<int>(100);
    write<double>(3.5);
    write<std::string>("xyz");
}

template <typename T>
void write(T a)
{
    std::cout << a << std::endl;
}
