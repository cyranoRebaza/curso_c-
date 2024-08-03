#include <iostream>
using namespace std;

int main(){

    // declarar las variables
    string nombre = "Juan";
    int edad;
    double salario;

    // solicito el salario y la edad del empleado
    cout << "Introduce el salario del empleado:";
    cin >> salario;

    cout << "Introduce la edad del empleado:";
    cin >> edad;

    cout << endl;
    cout << "*********************************" << endl;
    
    cout <<"Datos del empleado:" << endl << endl;
    
    cout << "Nombre:"  << nombre << endl;
    cout << "Edad:"    << edad << endl;
    cout << "salario:" << salario << endl;





    

    return 0;
}