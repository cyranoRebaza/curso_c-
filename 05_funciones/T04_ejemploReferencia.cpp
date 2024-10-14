#include <iostream>
#include <vector>
using namespace std;

void duplicarElementos(vector<int> &numeros) {

    // recorro el vector
    for(int &valor: numeros) {
        valor *= 2;
    }
}

int main() {

    // creo un vector de numero enteros
    vector<int> numeros = {1, 2, 3, 4, 5};

    // recorro el vector
    for(int valor: numeros) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "***********************************" << endl;

    // llamo a la funcion
    duplicarElementos(numeros);

    cout << "valores despues de llamra a la funcion: ";

    // recorro el vector
    for(int valor: numeros) {
        cout << valor << " ";
    }
    cout << endl;
    
    return 0;
}