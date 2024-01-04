#include <stdio.h>
#define FILAS 100
#define COLUM 100

void mostrarMatriz(int A[][COLUM], int nF, int nC);

int main(int argc, char *argv[])
{
	int i, j, nF, nC, A[FILAS][COLUM];

	printf("Ingrese el numero de filas\n");
	scanf("%d", &nF);
	printf("Ingrese el numero de columnas:\n");
	scanf("%d", &nC);

	for (i = 0; i<nF; i++)
	{
		for (j = 0; j<nC; j++)
		{
			printf("Ingrese el valor de la celda [%d][%d]:\n", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n");
	mostrarMatriz(A, nF, nC);

	return (0);
}

void mostrarMatriz(int A[][COLUM], int nF, int nC)
{
	int i, j;

	for (i = 0; i<nF; i++)
	{
		for (j = 0; j<nC; j++)
		{
			printf("[%d] ", A[i][j]);
		}
		printf("\n");
	}
}
