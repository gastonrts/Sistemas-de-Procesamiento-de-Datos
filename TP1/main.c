#include <stdio.h>
#include <stdlib.h>
#include "math.h" //para local "" y global <> #include stdio_ext.h>
#include <stdio_ext.h>
#include "math.h"
int ingresarNumero (float* numero)
{
        printf("Ingrese un numero:");
        __fpurge(stdin);
        scanf("%f", numero);
}


int main()
{
    int flag, opcion; //= 1;
    float numero1, numero2, resultadoSuma, resultadoResta;

    do
    {

        printf ("\n\n 1- Ingrese 1er operando, ingrese 2do operando \n \n:");

        printf("\n\n Ingrese una opcion del menu : ");

        scanf ("%d", &opcion);

        switch (opcion)

        {
            case 1:

            ingresarNumero (&numero1);
            fflush (stdin);
            // Ingresar primero operando
                break;
            case 2:

            ingresarNumero(&numero2);
            fflush (stdin);
            //Ingresar numero2
                break;
            case 3:
                break;

            case 4:
            printf ("resultados:");
                break;
            case 5:
            flag = 0; // para salir del menu
            break;

            default:
            printf("Ingrese una opcion valida\n\n");
        }

        __fpurge (stdin); //__fpurge
        printf ("\n\n Ingrese ENTER para continuar...");
        getchar();
        system ("clear");
    }

    while (flag!=0);

    return 0;
}


// & ingresa a una direccion de memoria y * a lo que esta dentro
