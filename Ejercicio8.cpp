#include <iostream>
using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int contador = 0;
    int productoPunto = 0;
    while(contador < longitud) {
        int elemento1, elemento2;
        cout << "Ingrese el elemento " << contador+1 << " del primer vector: ";
        cin >> elemento1;
        cout << "Ingrese el elemento " << contador+1 << " del segundo vector: ";
        cin >> elemento2;
        productoPunto += elemento1 * elemento2;
        contador++;
    }

    cout << "El producto punto de los vectores es: " << productoPunto;

    return 0;
}