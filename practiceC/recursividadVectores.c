#include <stdio.h>

void muestraRec(int L[], int n);
void muestraRec_Inv(int L[], int n);

int main()
{
	int L[5] = {0, 2, 4, 6, 8};

	 muestraRec(L, 4);
	 printf("\n");
	 muestraRec_Inv(L, 4);
	return (0);
}

void muestraRec(int L[], int n)
{
	if (n > 0)
	{
		muestraRec(L, n - 1);
		printf("[%d]\n", L[n]);
	}
}

void muestraRec_Inv(int L[], int n)
{
	if (n > 0)
	{
		printf("[%d]\n", L[n]);
		muestraRec_Inv(L, n - 1);
	}
}
