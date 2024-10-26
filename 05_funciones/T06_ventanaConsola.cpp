# include <iostream>
using namespace std;

// crear ventana de consola
void crearVentanna(int ancho = 800, int alto = 600, string titulo = "Mi ventana ", bool completa = false){

    cout << "Crear ventana:" << titulo << endl;
    cout << "Ancho: " << ancho << endl;
    cout << "Alto: " << alto << endl;   
    cout << "Pantalla ompleta: " << (completa ? "Si" : "No") << endl;
}

int main(){
    
    // llamamos a la funcion para crear diferentes tipos de ventanas
    // con los valores por defecto
    crearVentanna();

    cout << "******************************" << endl;
    // con los valores especificos
    crearVentanna(300, 400);

    cout << "******************************" << endl;
    
    crearVentanna(300, 400, "Mi ventana completa");

    cout << "******************************" << endl;

    crearVentanna(300, 400, "Mi ventana completa", true);


    return 0;
}