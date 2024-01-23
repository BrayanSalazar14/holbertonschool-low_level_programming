#include <stdio.h>
#include <stdlib.h>

void eliminar(int array[], int *cant, int position);
void mostrarArray(int array[], int cant);
void insertarVector(int array[], int cantidad);
void insertarElemento(int array[], int *cant, int pos);
void ordenarVector(int array[], int cant);
int buscarElem(int array[], int cant);

int main()
{
	int opcion, cantidad = 0, array[100], posicion = 0;
	printf("-----BIENVENIDOS----\n");

	while(1)
	{
		printf("\nIngrese una de las siguientes opciones:\n");
		printf("[1]Ingresar vector\n[2]Mostrar vector\n[3]Eliminar elemento\n[4]Insertar elemento\n[5]Ordenar vector\n[6]Buscar elemento vector\n[7]Salir\n");
		printf("\n");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				printf("\nIngrese el numero de elementos del vector:\n");
				scanf("%d", &cantidad);
				printf("\n");
				insertarVector(array, cantidad);
				break;
			case 2:
				if (cantidad == 0)
				{
					printf("\nEl vector no tiene elementos\n");
					break;
				}
				else
				{
					mostrarArray(array, cantidad);
					printf("\n");
					break;
				}
			case 3:
				if (cantidad == 0)
				{
					printf("\nEl vector no tiene elementos\n");
					break;
				}
				else
				{
					printf("\nIngrese la posición a eliminar:\n");
					scanf("%d", &posicion);
					eliminar(array, &cantidad, posicion);
					break;
				}
			case 4:	
				if (cantidad == 0)
				{
					printf("\nEl vector no tiene elementos\n");
					break;
				}
				else
				{
					printf("\nIngrese la posición a insertar:\n");
					scanf("%d", &posicion);
					insertarElemento(array, &cantidad, posicion);
					break;
				}
			case 5:
				if (cantidad == 0)
				{
					printf("\nEl vector no tiene elementos\n");
					break;
				}
				else
				{
					ordenarVector(array, cantidad);
					break;
				}
			case 6:
				if (cantidad == 0)
				{
					printf("\nEl vector no tiene elementos\n");
					break;
				}
				else
				{
					int elem;
					elem = buscarElem(array, cantidad);
					printf("[%d]\n", elem);
					break;
				}
			case 7:
				printf("Hasta la proxima\n");
				exit(0);
			default:
				printf("Opcion no valida\n");
				continue;
		}
	}
	return (0);
}

void mostrarArray(int array[], int cant)
{
	int i = 0;
	for (i = 0; i<cant; i++)
		printf("[%d]", array[i]);

	printf("\n");
}

void eliminar(int array[], int *cant, int position)
{
	int i = 0;
	for (i = position; i < *cant - 1; i++)
		array[i] = array[i + 1];

	*cant = *cant - 1;
}

void insertarVector(int array[], int cantidad)
{
	int i = 0;

	for (i = 0; i < cantidad; i++)
	{
		printf("Digite el elemento [%d]:\n", i);
		scanf("%d", &array[i]);
	}
	printf("\n");
}

void insertarElemento(int array[], int *cant, int pos)
{
	int posicion, elem, i;
	printf("\nQue valor deseas darle a la posicion[%d]\n", pos);
	scanf("%d", &elem);

	for (i = *cant - 1; i >= pos; i--)
		array[i+1] = array[i];

	array[pos] = elem;
	*cant = *cant + 1;
}

void ordenarVector(int array[], int cant)
{
	int decision;
	int i, j, aux;

	printf("\n[1]Menor a mayor\n[2]Mayor a menor\n");
	scanf("%d", &decision);

	if (decision == 1)
	{
		for (i = 0; i < cant - 1; i++)
		{
			for (j = i + 1; j < cant; j++)
			{
				if (array[j] < array[i])
				{
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
				}
			}
		}
	}
	
	if(decision == 2)
	{
		for (i = 0; i<cant - 1; i++)
		{
			for (j = i + 1; j<cant; j++)
			{
				if (array[i] < array[j])
				{
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
				}
			}
		}
	}
}

int buscarElem(int array[], int cant)
{
	int i = 0, elem;
	printf("Digite el elemento a buscar:\n");
	scanf("%d", &elem);

	while(i<cant && elem != array[i])
		i++;

	if (i<cant)
		return (i);
	else
		return (-1);
}
