#include<iostream>
using namespace std;

int main(){

    /*
        CONVERSIONES:   La regla genereral es que el tipo de dato del resultado sera el tipo de dato mas amplio o preciso 
                        de los operadores involucrados en la operacion
    
     */

    // declaro e inicializo varibles con tipo de datos diferentes
    int a = 3;
    float b= 4.2f;
    double c = 8.2;
    float resultado1; // declaro la variable resultado1 tipo float si los involucrados son int y float
    double resultado2; // declaro la variable resultado2 tipo double si los involucrados son int con double o float con double
    double promedio;


    resultado1 = a + b;
    resultado2 = a + c;

    promedio = (a + b + c ) / 3;


    cout << "el resultado es: " << resultado1 << " de tipo de dato: " << typeid(resultado1).name() << endl;
    cout << "el resultado es: " << resultado2 << " de tipo de dato: " << typeid(resultado2).name() << endl;
    cout << "el promedio es : " << promedio   << " de tipo de dato: " << typeid(promedio).name() << endl;



    return 0;
}