#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand((unsigned)time(NULL));
  int x;
  x = rand()%5;
  switch(x){
    case 0:
      cout << "大吉です" << endl;
      break;
    case 1:
      cout << "吉です" << endl;
      break;
    case 2:
      cout << "普通です" << endl;
      break;
    case 3:
      cout << "凶です" << endl;
      break;
    case 4:
      cout << "大凶です" << endl;
      break;
  }
}
