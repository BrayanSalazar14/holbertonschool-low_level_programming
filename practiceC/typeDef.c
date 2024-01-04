#include <stdio.h>

#define MAX 40

typedef struct{
	float x, y;
} tPunto;

typedef int entero;

typedef tPunto tListaPuntos[MAX];

 tPunto sumarPuntos(tListaPuntos lista, int N);

int main(int argc, char *argv[])
{
	tPunto p;
	entero a, b;
	tListaPuntos lista; //Es equivalente a hacer tpunto lista[MAX]
	int N, i;

	printf("Ingrese N:\n");
	scanf("%d", &N);
	
	for (i = 0; i<N; i++)
	{
		printf("Ingrese un punto (x,y): ");
		scanf("%f, %f", &lista[i].x, &lista[i].y);
	}

	p = sumarPuntos(lista, N);
	printf("Suma de x: [%0.f]\n", p.x);
	printf("Suma de y: [%0.f]\n", p.y);

	return (0);
}

tPunto sumarPuntos(tListaPuntos lista, int N)
{
	int i;
	tPunto p;

	p.x = 0;
	p.y = 0;

	for (i = 0; i<N; i++)
	{
		p.x += lista[i].x;
		p.y += lista[i].y;
	}
	return (p);
}
