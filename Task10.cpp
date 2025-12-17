#include <iostream>
using namespace std;
int main() 
{
    int a , b;
    cout << "Enter the numbers" << endl;
    cin >> a >> b ;
    if ( a > b) {
        cout << a;
        a = a + 1;
    } else { 
        cout << b << endl;
        b = b - 1;
    }
    cout << a << endl;
    cout << b << endl;
    return 0;
}

    