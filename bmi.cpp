#include <iostream>
using namespace std;

int main(){
	float weight;
	float height;

	cout << "身長をmで入力して下さい" << endl;

	cin >> height;

	cout << "体重を入力して下さい" << endl;
	cin >> weight;

	cout << "あなたのBMIは" << (weight / (height*height))*100 << endl;

	return 0;
}
