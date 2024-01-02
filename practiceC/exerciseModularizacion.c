#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float discriminante(int a, int b, int c);
int generarCoeficiente(int a, int b);
void resolverEcuacion(int a, int b, int d, float *x1, float *x2);

int main(int argc, char *argv[])
{
	int i, N, a, b, c;
	float dis, x1, x2;

	srand(time(NULL));

	printf("Ingrese la cantidad de ecuaciones: \n");
	scanf("%d", &N);

	for (i = 0; i<N; i++)
	{
		a = generarCoeficiente(-30, 30);
		b = generarCoeficiente(-30, 30);
		c = generarCoeficiente(-30, 30);

		dis = discriminante(a, b, c);

		if (dis > 0)
		{
			printf("Las raices son reales y distintas\n");
			resolverEcuacion(a, b, dis, &x1, &x2);
			printf("X1: %f, X2: %f\n", x1, x2);
		}
		else if (dis == 0)
		{
			printf("Las raices son reales o iguales\n");
			resolverEcuacion(a, b, dis, &x1, &x2);
			printf("X: %f\n", x1);
		}
		else
		{
			printf("Las raices son complejas\n");
		}
	}
	return(0);
}

float discriminante(int a, int b, int c)
{
	return(pow(b, 2) - 4*a*c);
}

int generarCoeficiente(int a, int b)
{
	return(a + rand() % (b-a+1));
}

void resolverEcuacion(int a, int b, int d, float *x1, float *x2)
{
	*x1 = (-b + sqrt(d))/2*a;
	*x2 = (-b - sqrt(d))/2*a;
}
