#include <iostream>
using namespace std;

int main() {
    const int numEstudiantes = 8;
    int aprobados = 0;
    int reprobados = 0;
    float sumaNotas = 0;
    int contador = 1;  

    while (contador <= numEstudiantes) {
        float nota;
        cout << "Ingrese la nota del estudiante " << contador << ": ";
        cin >> nota;
        sumaNotas += nota;
        if (nota >= 70) {  
        } else {
            reprobados++;
        }
        contador++; 
    }

    float promedioGeneral = sumaNotas / numEstudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedioGeneral << endl;

    return 0;
}
