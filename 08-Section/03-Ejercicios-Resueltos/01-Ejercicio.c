#include <stdio.h>

int main(void) {

    char caracter = 'X';
    char *mi_puntero;
    mi_puntero = &caracter;

    printf("valor de la variable caracter: %c\n", caracter);
    printf("direccion de la variable caracter que es almacenada en la variable puntero mi_puntero: %d \n", mi_puntero);
    printf("Valor de la variable mi_puntero: %d\n", mi_puntero);

    return 0;
}
