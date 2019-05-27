#include <iostream>
using namespace std;

int main() {

    long a, b;

    cin >> a;
    cin >> b;

    if (b/a * a < b ) {
        cout << b/a + 1 << endl;
    } else {
        cout << b/a << endl;
    };

    return 0;

}
