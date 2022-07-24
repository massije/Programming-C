#include <stdio.h>

int main (void) {

    char letra = 'A'; // si o si hay que poner comillas simples para reconocer un caracteer
    /*es posible poder imprimir la siguiente letra del abecedario, ya que las letras tiene asignado un VALOR del codigo ASCII
     aí el caracter A tiene le corresponde el valor 65 y al valor 65 el caracter A...  es por eso que cuando ponemos letra++,
     estamos diciendo que al numero 65 le sumemos un 1 y pasaria a ser 66 y al 66 le corresponde el valor B.
     y asi con todas las letras del abecedario.*/
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    letra++;
    printf("%c \n", letra);
    // y si seguimos sumando a la variable letra, ya nos imprimiria otra cosa, porque al numero 91, se le tiene asignado una llave
    letra++;
    printf("%c \n", letra);

    // probando decrementos e incrementos

    int a = 2;
    int b = 4;

    //a = --b;
    a = b--;
    printf("%d\n", a);
    printf("%d", b);

    //bits

    int izquierda = 1;
    izquierda <<= 4;

    printf("\n%d", izquierda);


    return 0;
}
