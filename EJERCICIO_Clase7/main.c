#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
int main()
{
    char nombre [5][31];
    char apellido [5][31];
    int edad[5];
    int legajo [5];
    int isEmpty[5];
    int i,j,apeAux,nomAux,legajoAux,flag=0;


    for (i=0;i<2;i++)
    {
        isEmpty [i]=!;
        printf("Nombre:");
        scanf("%s",&nombre[i]);
        printf("apellido:");
        scanf("%s",&apellido[i]);
        printf("legajo:");
        scanf("%d",&legajo[i]);

        fgets (nombre[i],sizeof nombre[i],stdin);
    }

    do
    printf("ABM opciones:",opciones);
    switch (opciones)
    {
    case 1:

        break;
    case 2:
        printf("Bajas");
        break;
    case 3:
        printf("Modificaciones");
        break;
    case 4:
        printf("Salir");
        break;
    default:
        printf("No es una opcion valida");
        break;
    }
    for (j=i++;i<CANTIDAD;j++)
    {
        if (strcmp(nombre[i],nombre[j])>0)
            strcpy (nombre,nombre[i]);
            strcpy (nombre[i],nombre[j]);
            strcpy (apellido[j],apeAux);
            edadAux = edad [i];
            legajoAux = legajo [i];

            if (strcmp(nombre[i],nombre[j])==0)
            {
                if (strcmp(nombre[i],nombre[j])>0)
            }
    }

    for (i=0;i<CANTIDAD;i++)
        if (isEmpty[i]=0)



    return 0;
}
int buscarInt (legajo[])
{
    if (legajoAux==legajo[i]){
        isEmpty [i] = 1;
        flag = 0;
        for (i=0;i<CANTIDAD;i++){
            print ("\t%d");

        }

        }
    }
}
