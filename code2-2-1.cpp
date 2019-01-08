#include <iostream>
#include <string>
using namespace std;

class KNeko
{
  string name;
public:
  void SetName(string n){
    name = n;
  }
  void Naku() const{
    cout << "にゃー。俺様は" << name << "だ。" << endl;
  }
};

int main()
{
  KNeko x;

  x.SetName("谷口");
  x.Naku();

  x.SetName("タマ");
  x.Naku();
}
