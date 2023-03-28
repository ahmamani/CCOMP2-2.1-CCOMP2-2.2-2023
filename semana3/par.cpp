#include <iostream>

using namespace std;

int main() {
    /**
     * Implemente un programa que evalue si el numero ingresado
     * es par.
    */

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    // false es equivalente a CERO
    // true es equivalente a LO QUE NO ES CERO
    if ( (num % 2) ) {
        cout << "ES IMPAR!!!!" <<endl;
    }
    else {
        cout << "ES PAR!!!" <<endl;
    }

    return 0;
}