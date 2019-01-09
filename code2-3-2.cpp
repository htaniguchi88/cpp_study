#include <iostream>
#include <string>
using namespace std;

class KNeko
{
  string name;
public:
  KNeko(){}
  KNeko(string n){
    name = n;
  }
  void SetName(string n){
    name = n;
  }
  void Naku() const{
    cout << "にゃー。俺様は" << name << "だ。" << endl;
  }
};

int main()
{
  KNeko x("たろうちゃま");
  x.Naku();
  KNeko y("ひーくんちゃま");
  y.Naku();
  KNeko z("yuritani");
  z.Naku();
  KNeko a;
  a.SetName("ばねす");
  a.Naku();
}
