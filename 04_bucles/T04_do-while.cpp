
/*
do while: es un bucle que se ejecuta al menos una vez, y luego se ejecuta mientras la condicion se cumpla.
    - la sintaxis es:
            do{
                // codigo a ejecutar
            }while(condicion);

*/

#include<iostream>
using namespace std;



int main(){

    // declaro las variables
    int opcion = 0;

    do{
        cout << "************* MENU *************" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;

        // elija una opcion 
        cout << "Elegido la opcion: ";
        cin >> opcion;

        if(opcion != 3){
            cout << "Elegiste la opcion: " << opcion << endl;
        }      

        
    
    } while(opcion != 3);

    cout << "Has elgido salir";
    
    
    return 0;

}
