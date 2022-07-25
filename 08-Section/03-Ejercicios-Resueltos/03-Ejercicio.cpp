#include <iostream>

using namespace std;

int main(void){


    int mi_variable;
    int &mi_referencia = mi_variable;

    mi_referencia = 0;
    mi_referencia++;

    cout << "El valor de mi_variable es: " << mi_variable << "\n";
    cout << "El valor de mi_referencia es: " << mi_referencia << "\n";

    cin.get();
    return 0;
}
