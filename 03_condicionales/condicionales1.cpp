#include <iostream>
using namespace std;

// crear una funcion que convierta string en minusculas
void convertir_minusculas(string &palabra){
    for(int i = 0; i < palabra.length(); i++){
        palabra[i] = tolower(palabra[i]);
}

}

int main(){

    //declaro las variables
    int edad;
    string examenMedico;
       
    // pido la edad
    cout << "Introduce tu edad: ";
    cin >> edad;

    // pido el examen medico
    cout << "Tienes examen medico (s/n): ";
    cin >> examenMedico;

    // llamo a la funcion
    convertir_minusculas(examenMedico);

    // evaluo la condicion
    if (edad >= 18 && examenMedico == "s") {
        cout << "Eres mayor de edad y puedes conducir" << endl;
    } else {
        cout << "No cumples los riquisitos" << endl;
    }


    return 0;
}