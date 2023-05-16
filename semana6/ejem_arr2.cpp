#include <iostream>

using namespace std;

void imprimir(const int array[], const int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

/* Implementar la funcion imprimir de forma recursiva */
/**
 * MIENTRAS tam sea mayor que 1
 *   imprimir array[tam-1]
 * 
*/
void imprimir_rec(const int array[], int tam, int i = 0){
    if(tam-i)
        return;
    cout << array[tam-1] << " ";
    imprimir_rec(array, tam-1, i+1);
}

int sumar(const int array[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += array[i++]);
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    imprimir(arr, 7);
    cout << "Suma de elementos: " << sumar(arr, 7) << endl;
    return 0;
}