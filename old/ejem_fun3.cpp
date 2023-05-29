#include <iostream>

using namespace std;

/**
 * "12345" -> 15
*/
int sumarDigitosDeCadena(string cadena) {
    int result = 0;
    int len = cadena.length();
    for(int i = 0; i < len; i ++){
        result += cadena.at(i) - '0';
    }
    return result;
}

int main() {
    
    cout << sumarDigitosDeCadena("2134") << endl;

    return 0;
}
