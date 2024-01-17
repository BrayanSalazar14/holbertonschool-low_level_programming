#include <stdio.h>

void eliminar(int array[], int *cant, int position);
void mostrarArray(int array[], int cant);

int main()
{
	int cantidad, i = 0;
	char decision;
	printf("Ingrese la cantidad del arreglo:\n");
	scanf("%d", &cantidad);

	int array[cantidad];

	for (i = 0; i<cantidad; i++)
	{
		printf("\nAgregue el valor del elemento[%d]:\n", i + 1);
		scanf("%d", &array[i]);
	}
	printf("\n");

	printf("Digite Y si desea mostrar el vector, o N si desea eliminar un elemento del vector:\n");
	scanf(" %c", &decision);

	if (decision == 'Y')
		mostrarArray(array, cantidad);
	else if (decision == 'N')
	{
		int posicion;

		printf("\nIngrese la posición a eliminar:\n");
		scanf("%d", &posicion);

		eliminar(array, &cantidad, posicion);

		printf("El vector quedo de la siguiente forma:\n");
		mostrarArray(array, cantidad);
	}
	else
		printf("Hasta la proxima!");

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
	for (i = position; i < *cant -1; i++)
		array[i] = array[i + 1];

	*cant = *cant - 1;
}
