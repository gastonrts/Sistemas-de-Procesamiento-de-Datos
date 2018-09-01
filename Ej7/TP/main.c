#include <stdio.h>
#include <stdlib.h>


int suma (int numero1, int numero2, int suma);
{
    suma = numero1 + numero2;


}

int division (float numero1, float numero2, &resultado);
{
    int retorno =  -1;
    float resultado;

    resultado = numero1 / numero2;

    if (numero2 =!0) // division
    {
        printf("Division exitosa:%f", resultado);
        retorno = 0;
    }

    else
    {
        printf("No se puede dividir por cero:");
    }
}        // funcion division.


int main()
{
    int exito;
    float resultado;

    exito = division (5,2);
    int numero1;
    int numero2;

    printf("Ingrese el primero numero:");

    return 0;
}



/*se puede hacer la division directamente desde el if */
