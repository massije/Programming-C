#include <stdio.h>

#define SECRETO 3 // gracias a #define podremos declarar e inicializar una constante.

int main (void) {

    int numero; // esto es la declaracion de una variable
    printf("Escriba el numero secreto: \n"); //Esta funcion nos permite imprimir algo en pantalla y el \n nos permite dar un salto de linea
    scanf("%d", &numero); //gracias a scanf() podemos escribir algo desde el teclado, pero antes de escribir tenemos que decirle al programa que tipo de valor recibira.
    // %d le dice que al programa que recibira un numero de tipo int, y el &"nombre de la variable", dice en que variable se quedara guardada.
    fflush(stdin); /*la funci�n del fflush, realiza la limpieza del buffer de entrada (stdin) standar input.
    usualmente quedan almacenados algunos datos en el buffer sobre todo saltos de linea y espacio y se deber�a usar antes de cada scanf
    con el fin de garantizar que el buffer este limpio. rara vez debo usar este comando en C++ pero en C lo uso muy frecuentemente, puede que exista alg�n m�todo mas efectivo.*/

    if(numero == SECRETO) // el if nos permite hacer una comparaci�n y en caso que se cumpla, imprimiremos la sigueinte linea en pantalla
        printf("Muy bien, lo has adivinado");
    else // y en caso de que la comparacion que se hizo no sea cierta, imprimiremos la sigueinte linea
        printf("Lo siento, no lo has adivinado. ERA: %d.", SECRETO);

    return 0; /*La instrucci�n return provoca que la ejecuci�n abandone la funci�n main (los objetos que se salgan
    de �mbito ser�n eliminados). Adem�s se llamar� a std::exit con el valor usado en el return como argumento. */

}
