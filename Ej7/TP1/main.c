#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag, opcion; //= 1;

    do
    {

        printf ("\n\n 1- Ingrese 1er operando, ingrese 2do operando \n \n:");

        printf("Ingrese una opcion del menu:");

        scanf ("%d", &opcion);

        switch (opcion)

        {
            case 1:

            break;
            case 2:
            //Ingresar numero2
            break;
            case 3:
            break;

            case 4:
            break;
            case 5:
            flag = 0; // para salir del menu
            break;

            default:
            printf("Ingrese una opcion valida\n\n");
        }
    }

    while (flag!=0);

    return 0;
}
