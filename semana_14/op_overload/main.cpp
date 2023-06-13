#include <iostream>
#include "Luca.h"

using namespace std;

int main() {
    Luca china(0, 50);
    Luca luca(1, 0);

    Luca lucachina(0,0);
    lucachina = china + luca;

    cout << lucachina << endl;;

    return 0;
}