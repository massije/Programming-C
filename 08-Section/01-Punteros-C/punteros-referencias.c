#include <stdio.h>

int main(void) {

    /* dependiendo del tipo de la direccion que vallamos a alamcenar, nuestro puntero tendra que ser de ese mismo tipo, etc.
    ejemplo:

        quiero crear una variable de tipo char llamada caracter --> char caracter;
        ahora si quiero almacenar la direccion de caracter en un puntero, el puntero debe ser de tipo char.

        char mi_punter_caracter = &caracter; --> asi quedaria nuestro puntero que fue creado para almacenar la direccion de una variable de tipo char.
    */
    int *mi_puntero;
    int edad = 18;

    mi_puntero = &edad; // al poner el ampersand "&" delante de una variable, podemos saber la direccion en la que se encuentra dicha variable,
                        // o la direccion la cual esta usando para poder almacenar los datos.

    printf("direccion en la que se encuentra almacenada la variable edad: %d\n", mi_puntero);
    printf("value or data que almacena la variable edad: %d\n", edad);
    printf("direccion del puntero que almacena a la direccion de edad: %d\n\n", &mi_puntero);

    /* Si las variables punteros se van a declara e inicializar con una direccion de una variable, dicha variable tiene que estar declarada antes.*/

    int mi_edad;
    int *mi_puntero1 = &mi_edad;
    int *mi_puntero2 = NULL;

    printf(" mi puntero 1: %d\n", mi_puntero1);
    printf(" mi puntero 2: %d\n\n", mi_puntero2); // este coge el valor de 0, ya que al poner NULL es como decirle que la variable esta vacia.

    /* Si a la variable que hemos creado de tipo puntero, le volvemos a poner * delante, pues obtendriamos el valor de la direccion de la variable que almacena*/

    // este es el primer puntero que creamos y pues al crearlo, nos almacena la direccion de la variable edad, pero si lo usamos y le ponemos un * delante,
    // pasamos a usar el valor de la direccion de la variable que estamos usando.
    edad = *mi_puntero + 1;
    printf("puntero con asterisco delante sumado con 1: %d\n", edad);

    printf("esta es la nueva edad: %d\n", edad);

    return 0;
}
