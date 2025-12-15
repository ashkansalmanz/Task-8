#include <iostream>
using namespace std;
int main() {
    cout << "ADAD ZOJ :" << endl;
    
    for (int i = 24; i >= 0; i--) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    cout << "ADAD FARD :" << endl;

    for (int i = 24; i >= 0 ; i--) {
        if ( i % 2 != 0) {
            cout << i << endl;
        }
    }
    return 0;
}