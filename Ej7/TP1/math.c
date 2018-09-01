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
