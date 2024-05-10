#include <iostream>
using namespace std;

int main() {
    int numero = 99;
    
    cout << "Estos son los Numeros impares en orden descendente entre 1 y 100:" << endl;
    
    while (numero >= 1) {
        cout << numero << endl;
        numero -= 2; 
    }
    
    return 0;
}
