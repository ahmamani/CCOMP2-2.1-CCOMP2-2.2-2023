#include <iostream>

using namespace std;

int main() {
    int arr[4];
    cout << "Por favor ingrese 4 valores enteros: ";
    int i = 0;
    while(i < 4){
        cin >> arr[i++];       
    }
    
    cout << "Los valores en el arreglo son: ";

    for(int i = 0; i < 4;)
        cout << " " << arr[i++];

    cout << endl;

    return 0;
}