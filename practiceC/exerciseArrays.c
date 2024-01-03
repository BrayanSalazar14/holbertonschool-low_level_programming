#include <stdio.h>

int sumaNumeros(int A[], int N);

int main(int argc, char *argv[])
{
	int A[100], N, suma, i;

	printf("Ingrese cantidad de numeros a sumar:\n");
	scanf("%d", &N);

	for (i = 0; i<N; i++)
	{
		printf("Ingrese el dato %d\n", i+1);
		scanf("%d", &A[i]);
	}

	suma = sumaNumeros(A, N);
	printf("La suma de los numeros es de: %d\n", suma);
}

int sumaNumeros(int A[], int N)
{
	int i, suma = 0;

	for(i = 0; i<N; i++)
		suma += A[i];

	return(suma);
}
