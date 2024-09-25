#include<iostream>
using namespace std;

int main(){

    /*
        OPERADORES:
            - ASIGNACION: igual(=), mas igual(+=), menos igual(-=), por igual(*=), dividido igual(/=)
            - ARITMETICOS:suma, resta(-), multiplicacion(*), division(/), modulo(%), incremento sufijo(a++), decremento sufijo(a--), incremento prefijo(++a), decremento prefijo(--a)
            - COMPARACION: mayor que(>), menor que(<), mayor o igual que(>=), menor o igual que(<=), igual que(==), diferente que(!=)
            - LOGICOS: Y logico(&&), O logico(||), negacion(!)
            - NIVEL BIT    
    */


   // declaro e inicializo una variable
   int a = 5;
   int b = 10;
   int c = 20;
   int d = 30;
   int x;
   int y;

   cout << "\nAsignacion mas igual:\n";
   a += b; // a = a + b  
   cout << "El valor de a es: " << a << endl;

   x = ++c; // incrementa el valor de c en 1 y luego se le asigna a x
   y = d++; // primero almacena el valor despues lo incrementa en 1
   cout << "\nIncremento prefijo:\n";
   cout << "El valor de c es:" << c << endl;
   cout << "El valor de x es:" << x << endl;

   cout << "\nIncremento sufijo:\n";
   cout << "El valor de d es:" << d << endl;
   cout << "El valor de y es:" << y << endl;
   



    return 0;
}