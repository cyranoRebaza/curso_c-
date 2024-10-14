#include <iostream>
#include <cmath>
using namespace std;
// creo la funcion potencia
double potencia(double base, int exponente) {

    return pow(base, exponente); // uso la funcion pow de la libreria cmath
}

int main() {
    
    // pido la base y el exponente
    double base;
    int exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    // llamo a la funcion
    cout << "La base elevada al exponente es: " << potencia(base, exponente);


    return 0;
}