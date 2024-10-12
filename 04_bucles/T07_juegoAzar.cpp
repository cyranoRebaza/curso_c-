#include <iostream>
#include <cstdlib> // para srand() y rand()
#include <ctime> // para time()

using namespace std;

int main(){

    srand(time(nullptr)); // inicializa la semilla del generador de numeros aleatorios(nullptr: se captura el tiempo actual)

    char continuar;

    do{
        int numeroSecreto = 1 + rand() % 100 + 1; // genera un numero aleatorio entre 1 y 100

        int intentos = 0; // contador de intentos
        
        bool adivinado = false; // adivinado en falso

        // mientras los intentos sean menor que cinco y no lo adivine
        while (intentos < 5 && !adivinado) 
        {
            // crear una variable para almacenar el valor introducido por el usuario
            int miNumero;
            cout << "Introduce el numero (1-100): ";
            cin >> miNumero;

            // evaluamos si hemos adivinado
            if (miNumero == numeroSecreto) {
                cout << "Adivinaste!" << endl;
                adivinado = true;
            } else if (miNumero > numeroSecreto) {
                cout << "El numero es menor" << endl;
            } else {
                cout << "El numero es mayor" << endl;
            }

            // incrementar el contador de intentos
            intentos++;
        }

        if (!adivinado) {
            cout << "Perdiste. El numero era: " << numeroSecreto << endl;
        }

        cout << "Quieres jugar de nuevo? (s/n): ";
        cin >> continuar;
        
    
    }while(continuar == 's' || continuar == 'S');
    

        

    return 0;
}