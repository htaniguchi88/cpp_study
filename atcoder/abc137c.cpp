#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    string str;
    vector<string> strVec;
    int ret;
    int counter;

    for (int i = 0; i < N; ++i) {
        getline(cin, str);
        strVec.push_back(str);
    }

//    for (int i; i < N; ++i) {
//
//        cout << "vec" << strVec[i]  << endl;
//    }


    for (int i=0; i<N; ++i) {
        for (int j = 0; j < N; ++j) {
            ret = memcmp(strVec[i], strVec[j], sizeof(strVec[i]));
            if (ret == 0){
                ++counter;
                cout << "カウンターだよ" << counter << endl;
            }
        }
    }

    cout << counter -N << end;

}
