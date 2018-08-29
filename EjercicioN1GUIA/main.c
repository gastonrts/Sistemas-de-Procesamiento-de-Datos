#include <stdio.h>
#include <stdlib.h>

int main()
{
        int numero1 = 3;
        int numero2 = 5;
        int numero3 = 2;
        int numero4 = 6;
        int numero5 = 9;

        float media; //Numero flotante o con decimal.

        media = (numero1 + numero2 + numero3 + numero4 + numero5) / 5;
        printf("La media es %f",media);
        scanf("%f",&media);

        return 0;
}
