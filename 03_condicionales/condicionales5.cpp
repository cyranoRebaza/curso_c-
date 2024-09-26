
/*
OPERADOR TERNARIO:
- la sintaxis es: variable = (condicion) ? (valores si es verdadero) : (valores si es falso);

- Es legible cuando se trata de condiciones simples
- No es legible cuando se trata de sentencias compuestas
- Es una expresion en lugar de una sentencia:
    - usar en una asignacion
    - en una llamada a una funcion
    - una sentencia de retorno

    ejemplo: mostrar por pantalla un mensaje si un numero es par o impar

*/

#include <iostream>
using namespace std;

int main(){

    //declaracion de variables
    int numero; 

    
    //pido el numero
    cout << "Introduce un numero: ";
    cin >> numero;

/*
    //evaluo la condicion
    if(numero % 2 == 0){
        cout << "El numero es par" << endl;
    }else{
        cout << "El numero es impar" << endl;
    }

*/

    // USANDO OPERADOR TERNARIO
    cout << (numero % 2 == 0 ? "El numero es par" : "El numero es impar") << endl;
    



    return 0;
}