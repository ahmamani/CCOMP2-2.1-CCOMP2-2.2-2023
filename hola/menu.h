#ifndef MENU_H
#define MENU_H

#include <iostream>

class Menu {
public:
    Menu();

    void mostrarMenu();
    int elegirModo();

private:
    void imprimirOpciones();
};

#endif 
