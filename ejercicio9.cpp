#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnas1;
    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    if(columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación.";
        return 0;
    }

    int i = 0, j = 0, k = 0;
    while(i < filas1) {
        while(j < columnas2) {
            int suma = 0;
            while(k < columnas1) {
                int elemento1, elemento2;
                cout << "Ingrese el elemento (" << i+1 << "," << k+1 << ") de la primera matriz: ";
                cin >> elemento1;
                cout << "Ingrese el elemento (" << k+1 << "," << j+1 << ") de la segunda matriz: ";
                cin >> elemento2;
                suma += elemento1 * elemento2;
                k++;
            }
            cout << "El elemento (" << i+1 << "," << j+1 << ") de la matriz resultante es: " << suma << endl;
            k = 0;
            j++;
        }
        j = 0;
        i++;
    }

    return 0;
}