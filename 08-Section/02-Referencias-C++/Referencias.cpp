#include <iostream>

using namespace std;

int main(void) {


    /*Importante: las referencias tiene una condicion , se les debe asiganar la variable original en el momento de la declaracion, porque sino
    nos saltaria un error*/
    int codigo;
    int &codigo2 = codigo;

    codigo2 = 5;

    cout << "el valor de codigo es: " << codigo << "\n";
    cout << "El valor de codigo2 es: " << codigo2 << "\n";
    cout << "Pulse intro para finalizar... \n";
    cin.get();

    return 0;
}

