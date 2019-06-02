#include <iostream>
#include <math.h>
using namespace std;
int main() {

  int array[5] = {8, 6, 1, 4, 2};

  int ins, cmp, temp, i;

  for (ins=1; ins<5; ++ins) {
    temp=array[ins];
    for (cmp=ins-1; cmp>=0; --cmp){
      if (array[cmp] > temp) {
         array[cmp+1]=array[cmp];
      } else {
        break;
      }
    }
		array[cmp+1]=temp;
  }

	for (i=0;i<5;++i) {
		cout << array[i] << endl;
	}

}
