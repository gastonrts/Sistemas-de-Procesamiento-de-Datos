#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo [50],i,cantidad;
    float salario [5];
    char nombre [5][31];

    for (i=0;i<50;i++)
    {
        printf("Legajo:");
        scanf("%d",legajo[i]);
        printf("Salario");
        scanf("%f",&salario[i]);
        fgets(nombre[i],sizeof nombre[i]-2,stdin);
        cantidad = strlen (nombre[i]);
        nombre [cantidad-1]='\0';


    }
}
