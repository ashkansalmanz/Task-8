#include <iostream>
using namespace std;
int main ()
{
    int i ,n ;
    long long fact = 1;
    cin >> n;
    if ((n < 0) || (n > 105)) {
        cout << "Adad vared shode dorost nist";
    } else {
        for (i = 1 ; i <= n ; ++i) {
            fact *= i;
        }
        cout << fact << endl;
    }
    return 0;
}

    