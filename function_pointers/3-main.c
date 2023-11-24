#include "3-calc.h"

int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = argv[2];

	if (op == NULL)
	{
        printf("Error\n");
        exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
