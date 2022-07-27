#include <stdio.h>


int main(void) {

    int numero;

    printf("Introduce un numero: ");
    scanf("%d", &numero);

    printf("El cuadrado del numero %d es %d.\n", numero, numero*numero);


    fflush(stdin);
    printf("\n\nPulse intro para finalizar el programa...");
    getchar();

    return 0;
}
