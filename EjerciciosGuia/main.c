#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador = 0;
    int acumulador = 0;
    int media;
    while (contador<5)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numero);

        contador ++;


    }
        media = numero * 5 / contador;
        printf("%d",&media);

    return 0;
}
