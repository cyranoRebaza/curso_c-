#include <iostream>
using namespace std;

void mostrarMensaje(string msg, int veces = 1 ){

    for(int i = 0; i < veces; i++){
        cout << msg << endl;
    }

}

int main() {

    // llamo a la funcion mostra mensaje
    mostrarMensaje("Hola mundo", 5);


    return 0;
}