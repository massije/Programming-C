#include <stdio.h>
#include <conio.h>//usamos esta libreria porque vamos a hacer el uso de la funcion getch()

int main(void) {

    /*Mostramos un caracter en pantalla*/
    //putchar('A');

    //getchar() nos sirve para leer algo del teclado y luego hay que presionar intro y nos imprimira lo escrito pero con eco, es decir
    //que se repite 2 veces

    char letra;

    printf("Introduce un caracter: \n");

    letra = getche();// getch(), nos permite hacer lo mismo pero no hace falta que presionemos intro y no hay eco.
    //getche() hace lo mismo pero es con eco y no espera intro y el eco lo imprime en al misma linea
    putchar(letra);

    printf("\n\tEste texto se muestra tabulado.");
    printf("\nEste texto se muestra en otra linea.\n");
    printf("\"Este texto se muestra entre comillas dobles\".");
    printf("\n\tEsta es la letra \'A\'.\n");

    /*dependiendo del caracter de tipo que pongamos, una variable se puede visualizar de distinta manera....*/
    /*
        %c for char
        %s for string
        %d for int
        %o for octal
        %x for hexadecimal
        %f for real number
        %p for memory direction
    */

    int numero = 500;

    printf("\n %o.\n", numero);
    printf("\n %x.\n", numero);

    /*scanf */

    int new_numero;
    char caractercito;

    printf("Escriba un numero de maximo 3 cifras: ");
    scanf("%3d", &new_numero); // tenemos que poner el ampersand para poder acceder a su direccion y asi luego poder mostrarla en pantalla

    /*limpiamos el buffer del teclado*/
    fflush(stdin);

    printf("\nEl valor del numero es: %d", new_numero);


    fflush(stdin);
    printf("\nPulse intro para finalizar...");
    getchar();

    return 0;
}
