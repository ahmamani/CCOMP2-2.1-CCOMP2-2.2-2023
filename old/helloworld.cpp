#include <iostream>

using namespace std;

int main() {
    /**
     * Para enteros:
     *      short                   2 bytes
     *      int --- long            4 bytes
     *      long long               8 bytes
    */
    
    unsigned short x = 65534;
    long y = 100;
    long long z = 1000;

    cout << x << endl;  
    x = x + 1;
    cout << x << endl;  
    x = x + 1;
    cout << x << endl;  

    return 0;
}
