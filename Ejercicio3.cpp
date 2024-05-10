#include <iostream>
using namespace std;

#include <iostream>

int main() {
    int suma = 0;
    int numero = 1;

    while (numero <= 100) {
        suma += numero * numero;
        numero++;
    }

    cout << "la suma de los cuadrados de los numeros entre 1 y 100 es: " << suma << endl;

    return 0;
}
