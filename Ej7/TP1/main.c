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
    int suma;
    int resta;
    int division;
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
/*
int main()
{
    int opcion;
    int A,B;
    int x,y;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorialA=1;
    int factorialB=1;
    int i,j;
    do
    {
        printf("1.Ingresa 1er operando(A=%d)\n",A);
        printf("2.Ingresa 2do operando(B=%d)\n",B);
        printf("3.Calcula todas las operaciones\n");
        printf("\ta-Calcular la suma (A+B)\n");
        printf("\tb-Calcular la resta (A-B)\n");
        printf("\tc-Calcular la division (A/B)\n");
        printf("\td-Calcular la multiplicion (A*B)\n");
        printf("\te-Calcular el factorial(A!)\n");
        printf("4-Informar resultados\n");
        printf("5.Salir\n");
        scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:

                    printf("\n1er operando:");
                    scanf("%d",&x);
                    A=x;
                    printf("\nA: %d\n ",A);
                    system("clear");
                    break;
                case 2:
                    printf("\n2do operando:");
                    scanf("%d",&y);
                    B=y;
                    printf("\nB: %d\n ",B);
                    system("clear");
                    break;
                case 3:
                    suma = A+B;
                    resta = A-B;
                    if(B==0)
                    {
                        printf("\n\tError\n");
                    }
                    else
                    {
                        division=(float)A/B;

                    }
                    for(i=1;i<=A;i++)
                    {
                        factorialA = factorialA * i;
                    }
                    for(j=1;j<=B;j++)
                    {
                        factorialB = factorialB * j;
                    }
                    multiplicacion=A*B;
                    break;
                case 4:
                    printf("\ta-El resultado de A+B es: %d \n",suma);
                    printf("\tb-El resultado de A-B es: %d\n",resta);
                    printf("\tc-El resultado de A/B es: %.2f\n",division);
                    printf("\td-El resultado de A*B es: %d\n",multiplicacion);
                    printf("\te-El resultado de A!: %d y B!: %d \n",factorialA,factorialB);
                    break;
                case 5:
                    break;
             }
        }while(opcion!=5);
    return 0;
}
/*
// & ingresa a una direccion de memoria y * a lo que esta dentro
