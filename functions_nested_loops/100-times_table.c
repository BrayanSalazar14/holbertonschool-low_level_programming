#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void print_number(int num)
{
	if (num < 10)
		_putchar(num + '0');
	else
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
}

void print_times_table(int n)
{
	int i, j, mul;
	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (mul <= 9)
			{
				print_number(mul);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (mul >= 100)
			{
				print_number(mul / 10);
				print_number(mul % 10);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (mul >= 10)
			{
				print_number(mul);
				if (j != n && i * (j + 1) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			if (i * (j + 1) < 10 && j != n)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
