#include <iostream>

using namespace std;

int fib(int n) {
    int res;
    int cont(0);
    int num1(1);
    int num2(1);
    if (n==0 || n == 1){
        return 1;
    
    }
    else{
        while(true){
            num1 = num2;
            num2= res;
            res = num1 + num2;
            cont++;
            if (cont > n)            
                break;
        }
        return res;
    }
}

int main() {
    /**
     * fib(0) = 1
     * fib(1) = 1
     * fib(2) = fib(0) + fib(1) = 2
     * ...
     * fib(n) = fib(n-2) + fib(n-1)
    */

    cout << fib(5) << endl;

    return 0;
}
