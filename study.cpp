#include <iostream>
#include <string>
using namespace std;


int main ()
{
  string name;
  int age;
  cout << "名前を入力して下さい:" ;
  cin >> name;
  cout << "年齢を入力して下さい:" ;
  cin >> age;

  cout << name << "さんは" << age << "歳なんですね。" << endl;
  if (age >= 20){
    cout << "もっと若く見えますよ" << endl;
  } else {
    cout << "意外と若いんですね。" << endl;
  }
}
