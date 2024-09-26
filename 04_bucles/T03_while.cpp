
/*
WHILE: es un bucle que nos permite ejecutar un bloque de instrucciones mientras la condicion se cumpla.
    - la sintaxis es:
            while(condicion){
                // codigo a ejecutar
            }

    Ejemplo: 
    - A) Mostrar los numeros pares entre 1 y 10
    - B) Ingresar una lista de numeros que corte con un cero y mostrar la suma de todos ellos

*/

#include<iostream>
using namespace std;

int main()
{
    /* solucion A */
    int i = 1;
    while(i <= 10)
    {
        // buscor todos los pares
        if (i % 2 == 0)         
        {
            cout << i << " es par" << endl;
        }
        
        // incrementar el contador
        i++;
    }


    cout << "*******************************" << endl;
    /* solucion B */
    // declaro las variables
    int num;
    int suma = 0;

    // pido el numero
    cout << "Introduce un numero: ";
    cin >> num;

    while(num != 0)
    {
        // sumo el numero
        suma += num;

        // pido el siguiente numero
        cout << "Introduce un numero: ";
        cin >> num;
    }

    //muestro la suma
    cout << "La suma es: " << suma << endl;


    return 0;
}