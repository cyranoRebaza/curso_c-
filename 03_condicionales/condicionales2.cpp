
/**
 Un alumno recibe una beca si su calificacion es mayor o igual a 8 o si la distancia
 a su domicilio es mayor o igual a 40 km. ademas los ingresos familiares deben ser menores o iguales
 a salarrio minimo

 *************************
 - con que cumpla una de las dos sera suficiente para obtener la beca.

 */

#include <iostream>
using namespace std;

int main(){

    // declaro las variables
    int calificacion;
    int distancia;
    int salarioMinimo = 3000;

    // pido la calificacion
    cout << "Introduce tu calificacion: ";
    cin >> calificacion;

    // pido la distancia
    cout << "Introduce tu distancia: ";
    cin >> distancia;

    //pido el salario minimo
    cout << "Introduce tu salario minimo: ";
    cin >> salarioMinimo;

    // evaluo la condicion
    if (calificacion >= 8 || (distancia >= 40 && salarioMinimo <= 3000)) {
        cout << "Eres apto para la beca" << endl;
    } else {
        cout << "No cumples los requisitos" << endl;
    }




    return 0;
}