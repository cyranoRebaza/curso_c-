/*
FUNCION PROTOTIPO: 
    - es una declaracion previa de una funcion que informa al complilador de que se utilizara 
    en el programa esa funcion.
    - tambien informara su tipo y numero de parametros y si la funcion devuelve o no un valor.

    DOS FORMAS: 
        - forma 1: Defino la funcion antes de usarla (sirve para programas pequeños)
        - forma 2: uso funciones prototipos
            - especifica al compilador que funciones se van a utilizar
            - se coloca al comienzo(por convencion)
            - admite la posibilidad de crearlas en archivos externos (extensiones .h / .hpp)


*/

#include <iostream>
#include <cmath>
using namespace std;
// PROTOTIPO DE LA FUNCION POTENCIA
void potencia(double base, int exponente);


int main() {
    
    cout << "La base elevada al exponente es: ";
    // llamo a la funcion --> es una funcion que no tiene un valor de retorno, imprime el resultado en consola
    potencia(5, 2);


    return 0;
}

// creo la funcion potencia
void potencia(double base, int exponente) {

    cout << pow(base, exponente); // cuando llamen a la funcion imprimir el resultado
}