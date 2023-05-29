/**
 * break
 * continue
*/
#include <iostream>

using namespace std;

int main() {
    // imprimir todos los numeros del 1 al 100 sin considerar los numeros cuyo multiplo
    // sea 3.
    
    /* USANDO FOR */    
    /*for (int x = 0; x < 101; x++){
        if(x % 3 == 0)
            continue;
        cout << x << " ";
    }*/

    /* USANDO WHILE */
    /*int n;
    n=0;
    while(n<100){
        n++;
        if( !(n % 3) )        
            continue;        
        else{            
            cout<<n<<" ";
        }
    }*/
    /*for(int i = 0; i <= 100; i++){
        if(i % 3 != 0)
            cout << i << " ";
    }*/
    
    cout << endl;
    return 0;
}