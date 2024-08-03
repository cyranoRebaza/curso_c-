#include <iostream>
using namespace std;

int main(){

    /*
        TIPOS DE DATOS: caracteres(char), esteros (short, int long, long long), decimales (float, double, long double), booleanos(bool)

        VARIABLE: es un espacio en la memoria del ordenador donde se almacena un valor que podria cambiar durante la ejecucion
    */


    // Declaracion una variable
    int salario;

    // Inicializacion la variable (dando valor a la variable)
    salario = 2500;

    // Muestro el valor almacenado en la variable 
    cout << "el salario es:"<< salario << endl;

    salario = 3000;
    cout << "el salario es:"<< salario;

    

    return 0;
}