#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates and prints all possible combinations of three digits
 * (0-9), where the digits are distinct and in increasing order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i < 7 || j < 8 || k < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
}
