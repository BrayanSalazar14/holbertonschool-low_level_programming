#include <stdio.h>

int fact_it(int n);
 int fact_recursive(int n);

int main(int argc, char *argv[])
{
	int n = 5;
	printf("El factorial por ciclo es: [%d]\n", fact_it(n));
	printf("El factorial por recursión es: [%d]\n", fact_recursive(n));
	return (0);
}

int fact_it(int n)
{
	int i, f = 1;

	for (i = 1; i<=n; i++)
		f = f * i;

	return (f);
}

int fact_recursive(int n)
{
	if (n > 0)
		return (n * (fact_recursive(n - 1)));
				else
				return (1);
}
