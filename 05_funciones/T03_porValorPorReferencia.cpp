#include <iostream>
using namespace std;

void ejemplofuncion(int num) {
    num = 50;
}

void ejemplofuncion2(int &num) {
    num = 50;
}



int main() {

    // pasa parametro por valor --> copia el valor del parametro
    int minumero = 10;
    cout << "valor original: " << minumero << endl;

    ejemplofuncion(minumero); 
    cout << "valor despues de llamar a la funcion: " << minumero << endl;

    cout << "***********************************" << endl;

    // pasa parametro por referencia (enlace o link) --> paso el valor original a la funcion --> modifica el valor original
    int miNumero2 = 20;
    cout << "valor original: " << miNumero2 << endl;

    ejemplofuncion2(miNumero2);
    cout << "valor despues de llamar a la funcion: " << miNumero2 << endl;

    return 0;
}
