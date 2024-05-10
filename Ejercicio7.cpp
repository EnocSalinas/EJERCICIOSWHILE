#include <iostream>
using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int contador = 0;
    while(contador < longitud) {
        int elemento1, elemento2, suma;
        cout << "Ingrese el elemento " << contador+1 << " del primer vector: ";
        cin >> elemento1;
        cout << "Ingrese el elemento " << contador+1 << " del segundo vector: ";
        cin >> elemento2;
        suma = elemento1 + elemento2;
        cout << "La suma del elemento " << contador+1 << " es: " << suma << endl;
        contador++;
    }

    return 0;
}