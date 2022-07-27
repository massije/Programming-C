#include <stdio.h>


int main(void) {

    char letra;

    printf("Introduce una letra: ");
    letra = getch();
    putchar(letra++);
    printf("\nla siguiente letra es: ");
    putchar(letra);



    fflush(stdin);
    printf("\n\nPulse intro para finalizar el programa...\n");
    getchar();
    return 0;
}
