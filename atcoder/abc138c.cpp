#include <bits/stdc++.h>
using namespace std;

double Generate(int a, int b)
{
    return (double)(a+b)/2;
}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    vector<int> V;

    for(int i=0; i<V.size(); ++i)
    {
        for(int j=0; j<V.size(); ++j){
            if (j == 0){
                double hoge = Generate(V[i], V[j]);
            } else {
                hoge = Generate(hoge, V[j]);
            }
        }
    }


}
