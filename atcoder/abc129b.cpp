#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
  ios::sync_with_stdio(false);

	int32_t N;
	int32_t input;

	cin >> N;

	vector<int32_t> w={};
	vector<int32_t> answer={};

	for (size_t i = 0; i<N; ++i){
		cin >> input;
		w.push_back(input);
	}
	sort(w.begin(),w.end());

	int32_t middle = w.size()/2;

  cout << "middle:" << middle << endl;

  for (int32_t i=1; i<w.size(); ++i){
	int32_t s1 = accumulate(w.begin(), w.begin()+i, 0);

		cout << "s1: " << s1 << endl;

		int32_t s2 = accumulate(w.begin()+i, w.end(), 0);

		cout << "s2: " << s2 << endl;

		if (s1 < s2) {
			cout << s2-s1;
			answer.push_back(s2-s1);
		} else {
			answer.push_back(s1-s2);
		}
	}

	int32_t min = *min_element(answer.begin(), answer.end());

	cout << min << endl;

}
