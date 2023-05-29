/**
 * break
 * continue
*/
#include <iostream>

using namespace std;

int main() {
    // Fib
    int x;
    int y;
    int n;
    int fib = 1;
    x=1;
    y=1;
    cout<<"Ingrese un valor por teclado"<<endl;
    cin>>n;

    for(int i = 1; i < n; i++){
        fib = x + y;
        x = y;
        y = fib;
    }
    cout << fib << endl;
    
    cout << endl;
    // 1  1  2  3  5  8
    return 0;
}