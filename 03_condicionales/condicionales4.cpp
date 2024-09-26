
/*
Hacer un programa que me de opciones de dos idiomas, espaniol(E) e ingles(I). independiente del idioma que me muestre la categoria
libros(L) o ropa(R) o tecnologia(T).
*/

#include <iostream>
using namespace std;

int main(){

    // declaro las variables
    char idioma;
    char categoria;

    // pido el idioma
    cout << "Introduce el idioma (E o I): ";
    cin >> idioma;

    switch (idioma)   {
    case 'E':
    case 'e':

        cout << "Elige una categoria (L o R o T): ";
        cin >> categoria;
        switch (categoria)
        {
        case 'L':
        case 'l':
            cout << "Has elegido la categoria Libros" << endl;
            break;
        
        case 'R':
        case 'r':
            cout << "Has elegido la categoria Ropa" << endl;
            break;
        
        case 'T':
        case 't':
            cout << "Has elegido la categoria Tecnologia" << endl;
            break;
        
        default:
            cout << "La categoria no valida" << endl;
        break;

        }
    break;

    case 'I':
    case 'i':
        cout << "Select a category (B: Books,C: clothing, T: technology): ";
        cin >> categoria;

        switch (categoria)
        {
        case 'B':
        case 'b':
            cout << "You have selected Books" << endl;
            break;
        
        case 'C':
        case 'c':
            cout << "You have selected Clothing" << endl;
            break;
        
        case 'T':
        case 't':
            cout << "You have selected Technology" << endl;
            break;
        
        default:
            cout << "Category not valid" << endl;
            break;

        }

    break;
    
    default:
        cout << "Idioma no valido" << endl;
        break;
    

    }


    return 0;
}