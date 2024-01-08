#include <stdio.h>
#define TMAX 40

typedef char tCadena[TMAX];

void scanfString(tCadena s);

int main(int argc, char *argv[])
{
	tCadena s;

	scanfString(s);
	printf("%s\n", s);
	return (0);
}

void scanfString(tCadena s)
{
	char c;
	int j = 0;

	while(j < TMAX-1 && (c=getchar()) !=EOF && c!='\n')
	{
		s[j] = c;
		j++;
	}
	s[j] = '\0';

	while(c!=EOF && c!='\n')
	{
		c=getchar();
	}
}
