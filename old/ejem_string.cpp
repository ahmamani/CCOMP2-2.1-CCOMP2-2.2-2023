#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    cout<<"Ingresa tu nombre COMPLETO!!: ";
    getline(cin, nombre);

    cout << "hola " << nombre <<" bienvenido al curso"<<endl;
    int edad;
    cout<<"¿Què edad tienes? ";
    cin>>edad;
    string variable;
    cout<< "Tu edad es " << edad <<endl;
    if (edad >= 18){
        cout<<"¿quieres salir conmigo?"cin variable;
    }
    else{
        cout<<"un gusto conocerte"<<endl;
    }



    return 0;
}
