
/*
SINTAXIS:

swith (expresion) {
    case valor1:
        instrucciones para el caso valor1;
        break;
    case valor2:
        instrucciones para el caso valor2;
        break;
    default:
        instrucciones para el caso que no cumpla ninguna de las anteriores;
        break;
}
************************
- solo funciona con enteros (int, char, long, etc)
- no se puede utilizar para usar cadenas de caracteres (string)


*/


#include <iostream>
using namespace std;

int main() {
    // CREAR MENU
    // declarar variables
    int opcion;

    cout << "************* MENU *************" << endl;
    cout << "1. Mostrar mensaje" << endl;
    cout << "2. Calcular una suma" << endl;
    cout << "3. Salir del programa" << endl;

    cout << "Introduce una opcion deseada:" << endl;
    cin >> opcion;


    switch (opcion) {
    case 1:
        cout << "Hola como estas" << endl;
        break;
    case 2:
        int num1, num2, suma;
        cout << "Introduce el primer numero:";
        cin >> num1;
        cout << "Introduce el segundo numero:";
        cin >> num2;
        suma = num1 + num2;
        cout << "La suma es:" << suma << endl;
        break;
    case 3:
        cout << "Hasta luego" << endl;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }


    


    return 0;
}