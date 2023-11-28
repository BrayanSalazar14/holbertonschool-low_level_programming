#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	char c;
	int i, index = 0;
	float f;
	char *s;

	va_list args;

	va_start(args, format);

	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				printf("%s", s ? s : "(nil)");
				break;
			default:
				index++;
				continue;
		}
		index++;

		if (format[index + 1])
			printf(", ");

	}
	va_end(args);
	printf("\n");
}
