#include <stdio.h>

int main(int argc, char *argv[])
{
	char string[20] = "Brayan";
	char string2[5];

	//char string2[20] = {'S','a', 'l', 'a', 'z', 'a', 'r', '\0'};
	// char *string3 = "3125427682";

	fgets(string2, 5, stdin);
	printf("Nombre: [%s]\n", string2);
	return (0);
}
