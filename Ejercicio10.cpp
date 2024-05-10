#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    int i = 0, j = 0;
    while(i < filas) {
        while(j < columnas) {
            int elemento;
            cout << "Ingrese el elemento (" << i+1 << "," << j+1 << ") de la matriz: ";
            cin >> elemento;
            cout << "El elemento (" << j+1 << "," << i+1 << ") de la matriz transpuesta es: " << elemento << endl;
            j++;
        }
        j = 0;
        i++;
    }

    return 0;
}