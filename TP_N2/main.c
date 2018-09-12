#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
int main()
{
    int id;
    char name[51];
    char lastName [51];
    float salary;
    int sector,cantidad;
    int options;
    int isEmpty;
    int i;
    int flag1;
    switch (options)
{


    case 'a': for (i=0;i<50;i++)
    {
        printf("nombre:");
        scanf("%s",&name[i]);
        printf("apellido");
        scanf("%s",&lastName[i]);
        printf("salario");
        scanf("%f",&salary);
        printf("sector");
        scanf("%d",&sector);


        fgets(name[i],sizeof name[i]-2,stdin);
        cantidad = strlen (name[i]);
        name [cantidad-1]='\0';





}





    return 0;
    }
