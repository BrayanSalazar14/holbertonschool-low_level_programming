#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i, index = 0;
	float f;
	char *s;

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
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				break;
		}
		index++;
		if (format[index] != '\0' && (format[index] == 'c'
					|| format[index] == 'i'
					|| format[index] == 'f'
					|| format[index] == 's'))
			printf(", ");
	}
	va_end(args);
}
