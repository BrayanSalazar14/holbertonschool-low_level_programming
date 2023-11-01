#include "main.h"

int print_last_digit(int n)
{
	int lstd;

	if (n < 0)
	{
		lstd = (n * -1) % 10;
		_putchar(lstd + '0');
		return (lstd);
	}
	else if (n > 0 || n == 0)
	{
		lstd = n % 10;
		_putchar(lstd + '0');
		return (lstd);
	}
}
