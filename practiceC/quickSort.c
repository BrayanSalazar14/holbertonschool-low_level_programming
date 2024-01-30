#include <stdio.h>

void quickSort(int L[], int ini, int fin)
{
	int piv, izq, der, med;

	if (ini<fin)
	{
		piv = L[ini];
		izq = ini;

		der = fin;

		while (izq<der)
		{
			/*Se encarga de que los elementos que son menores que el pivot vayan a la izquierda*/
			while (der>izq && L[der]>piv)
				der--;
			if (der>izq)
			{
				L[izq] = L[der];
				izq++;
			}
			/*Se encarga de tener a la derecha los mayores que el pivot*/
			while (izq<der && L[izq]<piv)
				izq++;
			
			if (izq<der)
			{
				L[der] = L[izq];
				der--;
			}
		}
		L[der] = piv;
		med = der;
		quickSort(L, ini, med-1);
		quickSort(L, med+1, fin);
	}
}

int main()
{
	int i, L[7] = {6, 5, 3, 1, 8, 7, 2};

	quickSort(L, 0, 6);

	for (i = 0; i<7; i++)
		printf("[%d]\t", L[i]);
	return (0);
}

