
/*
FOR:
    - sabemos antes de ejecutar el programa cuantas veces queremos que se ejecute un bloque de instrucciones
    - la sintaxis es: 
            for (inicializador; condicion; incremento){
                //codigo a ejecutar en cada iteracion
                
                }

    *****************************************

    Ejemplo:

    - mostrar hola mundo 10 veces


*/

#include<iostream>
using namespace std;

int main(){

    // mostrar hola mundo 10 veces
    for (int i = 0; i < 10; i++)
    {
        cout << "Hola mundo" << endl;
    }

    cout << "*********************************" << endl;

    // leer las edades almacenadas en un array
    int edades[] = {15, 20, 25, 30, 35};

    for (int i = 0; i < 5; i++)
    {
        cout << "Edad: " << edades[i] << endl;
    }
    
    
    cout << "*********************************" << endl;

    // recorrer un array bidimensional

    int numeros[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
