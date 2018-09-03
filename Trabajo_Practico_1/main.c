#include <stdio.h>
#include <stdlib.h>

int main()
{
  
	
	int opcion;
	int a, b;
	float numero1, numero2;
	
	do
	
{		

		opcion = printf("\n 1- Ingresar primer operando.\n 2-Ingrese segundo operando. \n 3- Calcular todas las operaciones. \n 4-Informar los resultados. \n 5- Salir.\n\n Ingrese una opcion del menu: ");
    	scanf ("%d", &opcion);
	switch (opcion)
	{
		case 1:
			ingresarNumeroUno (&numero1);
			break;
		case 2: 
			ingresarNumeroDos (&numero2);
			break;
		case 3:
		case 5:
			printf ("\n\nCerrando el programa.");

			break;
	}
	
}
	while (opcion!=5);
	
	
	
	
	return 0;	
	
	
	
	
}

int ingresarNumeroUno (int numero1)
{		printf("Ingrese un numero:");
        scanf("%f", numero1);
        return numero1;
}

int ingresarNumeroDos (int numero2)
{		printf ("Ingrese operando nro 2 : ");
		scanf ("%f", numero2);
		return numero2;
}



/*
int sumar (int numero1, int numero2)

{	
	int suma;
    suma = 0;

    suma = numero1 + numero2;

    return suma;
}*/
