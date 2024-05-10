#include <iostream>
using namespace std;

int main() {
    int estudiantes = 10;
    int contador = 0;
    float suma = 0;

    while (contador < estudiantes) {
        float nota;
        cout << "Ingrese la nota del estudiante " << (contador + 1) << ": ";
        cin >> nota;
        suma += nota;
        contador++;
    }

    float promedio = suma / estudiantes;
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}
