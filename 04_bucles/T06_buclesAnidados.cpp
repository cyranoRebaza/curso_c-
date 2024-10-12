#include <iostream>
using namespace std;

int main(){

    const int MIN_NUMERO = 1;
    const int MAX_NUMERO = 10;

    for(int i = MIN_NUMERO; i <= MAX_NUMERO; i++){
        
        cout << endl << "TABLA DEL " << i << endl;

        for(int j = MIN_NUMERO; j <= MAX_NUMERO; j++){
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    cout << endl;

 return 0;   
}
