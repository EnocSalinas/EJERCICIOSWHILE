#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n], vectorSuma[n];
    int i = 0;

    cout << "Ingrese los elementos del primer vector: ";
    while (i < n) {
        cin >> vector1[i];
        i++;
    }

    i = 0;
    cout << "Ingrese los elementos del segundo vector: ";
    while (i < n) {
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < n) {
        vectorSuma[i] = vector1[i] + vector2[i];
        i++;
    }

    cout << "La suma de los vectores es: ";
    i = 0;
    while (i < n) {
        cout << vectorSuma[i] << " ";
        i++;
    }

    return 0;
}


