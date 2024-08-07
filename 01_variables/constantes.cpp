#include <iostream>
using namespace std;

int main()
{

    /*
        CONSTANTE:  - es un espacio  en la memoria donde almacena un valor que no va cambiar durante la ejecucion
                    - se deben declarar e inicializar al mismo tiempo

        CONSTANTES LITERALES: - numeros, string, secuencias de escape (\n \t \b)
        CONSTANTES DECLARADAS: - palabra reserva const (const double iva= 0.21)
        CONSTANTES ENUMERADAS: - palabra reserva enum (const double iva= 0.21)

     */

    // declaro las variables
    const string nombre = "Juan"; // declaro e inicializo la constante en la misma linea
    int edad;
    double salario;

    // solito datos al usuario
    cout << "El salario del empleado es:";
    cin >> salario;

    cout << "La edad del empleado es:";
    cin >> edad;

    cout << endl << "******************************" << endl;

    cout << "DATOS DEL EMPLEADO:" << endl;

    cout << "Nombre:"  << nombre << endl;
    cout << "Edad:"    << edad << endl;
    cout << "Salario:" << salario << endl;

    system("pause");
    return 0;
}