#include <stdio.h>


int main(void) {

    int numero_1;
    int numero_2;
    int resto;

    printf("Introduce un numero: ");
    scanf("%d", &numero_1);

    printf("\nIntroduce otro numero: ");
    scanf("%d", &numero_2);

    printf("\n\nEl resto de dividir %d entre %d es: %d", numero_1, numero_2, (numero_1 % numero_2));


    fflush(stdin);
    printf("\n\nPulsa intro para finalizar...\n");
    getchar();

    return 0;
}
