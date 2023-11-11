/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_chessboard - unction that prints the chessboard
 *@a: Pointer char variable declaration
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
