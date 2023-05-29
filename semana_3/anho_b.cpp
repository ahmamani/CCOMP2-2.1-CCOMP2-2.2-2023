#include <iostream>
using namespace std;

int main() {

    int ano;

    cout << "Ingrese un año: ";
    cin >> ano;

    if (ano%4==0 && ano%100 !=0 or ano%400==0) {
        cout << "El año es bisiesto"<<endl;
    }
    else {
        cout << "El año no es bisiesto"<<endl;
    }

    return 0;
}