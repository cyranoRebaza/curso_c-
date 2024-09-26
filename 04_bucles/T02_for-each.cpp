
/*
FOR EACH( por cada elemento): es un bucle que nos permite recorrer un array o una cadena de caracteres.
    - Utiliza para recorrer contnedores (vector, list, map, etc)
    - La sintaxis es:
            for (variable : contenedor){
                // codigo a ejecutar --> tantas veces como elementos haya en el contenedor
            }



*/


#include <iostream>
using namespace std;

int main(){

    // almacenar las edades de 5 personas
    int edades[] = {15, 20, 25, 30, 35};

    // recorrer el array
    for (int edad : edades){
        cout << "Edad: " << edad << endl;
    }

    cout << "*******************************" << endl;

    // almacenar el salario de 5 personas
    double salarios[] = {1500, 2000, 2500, 3000, 3500};

    // recorrer el array
    for (double salario : salarios){
        cout << "Salario: " << salario << endl;
    }

    cout << "*******************************" << endl;

    // recorrer un string
    string nombre = "Juan@gmail.com";
    
    for (char letra : nombre){
        if (letra == '@') {
            cout << "Encontre la @" << endl;
        }
        else {
            cout << "No encontre la @" << endl;
        }
        
    }

    return 0;
}