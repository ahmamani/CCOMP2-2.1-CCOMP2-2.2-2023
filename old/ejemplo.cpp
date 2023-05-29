#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int c = 20;

    cout << x++ << endl;  // 0
    ++x;
    cout << ++x << endl;  // 3

    x = c++;
    cout << x++ << endl;  // 20
    cout << ++x << endl;  // 22 
    cout << c << endl;  // 21
    

    return 0;
}