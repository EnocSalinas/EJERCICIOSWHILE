#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    
    int suma = 0;
    int contador = 1;
    while (contador <= n) {
        suma += contador;
        contador++;
    }
    
    cout << "La suma de los numeros desde 1 hasta " << n << " es: " << suma << endl;
    
    return 0;
}
