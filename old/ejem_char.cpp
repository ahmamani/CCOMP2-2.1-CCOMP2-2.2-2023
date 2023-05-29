#include <iostream>

using namespace std;

int main() {
    char var1 = 'A'; // CORRECTO
    // char var2 = "g"; // INCORRECTO
    // char var3= 'as'; // INCORRECTO

    cout << sizeof(var1) << endl;
    /**
     * cast -> conversion de tipo
    */
    int valor;
    valor = static_cast<int>(var1);
    cout << valor << endl;

    return 0;
}
