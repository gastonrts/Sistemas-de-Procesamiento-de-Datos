#include <stdio.h>
#include <stdlib.h>

int main()
{   int superficie;
    int baseTriangulo;
    baseTriangulo = printf("Ingrese base del triangulo:");
    scanf("%d",&baseTriangulo);

    int alturaTriangulo;
    alturaTriangulo = printf("Ingrese altua del triangulo:");
    scanf("%d",&alturaTriangulo);

    superficie = baseTriangulo * alturaTriangulo;
    superficie = printf("La superficie es %d",superficie);
    return 0;

}
