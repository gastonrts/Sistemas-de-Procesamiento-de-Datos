#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int multiplicacion;
    float cuadrado;

    numero1 = printf("Ingrese un numero:");
    scanf("%d",&numero1);

    numero2 = printf("Ingrese un numero:");
    scanf("%d",&numero2);

    multiplicacion = numero1 * numero2;
    printf("La MULTIPLICACION ES %d",multiplicacion);
    fflush(stdin);

    cuadrado = numero1 * 2;
    cuadrado = printf ("\n\nSu cuadrado es %f",cuadrado );

}
