# include <iostream>
# include <thread>
# include <chrono>
using namespace std;


// crear una funcion que va generar temperaturas aleatorias
double leerTemperatura() {

    return 20.0 + (rand() % 20); // numero entre 0 y 20
}
// dormir el unico hilo de ejecucion
void esperarSegundos(int segundos) {

    this_thread::sleep_for(chrono::seconds(segundos));
}

int main() {

    const double LIMITE_TEMPERATURA = 35.0;

    // bucle infinito
    while(true) {

        double temp = leerTemperatura();

        cout << "temperatura: " << temp << " grados" << endl;

        if (temp > LIMITE_TEMPERATURA) {
            cout << " ALERTA!!!: Temperatura alta: " <<  temp << endl;
        }

        // llamados al metodo
        esperarSegundos(3);
    }

    return 0;
}