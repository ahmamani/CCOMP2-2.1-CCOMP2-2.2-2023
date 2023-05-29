#include <iostream>

using namespace std;

int contarCarDeCadena(string cad, char car) {
    int len = cad.length();
    int cont = 0;
    for(int i=0; i < len; i++){
        if(cad.at(i) == car)
            cont++;
    }
    return cont;
}

int main() {
    cout << contarCarDeCadena("ciencia", 'i') << endl;

    return 0;
}
