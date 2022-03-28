#include "main.h"

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j = 1;

	while (a[0][j - 1] != 0)
	{
		_putchar(a[0][j - 1]);
		if (j > 1 && j % 8 == 0)
			_putchar('\n');
		j++;
	}
}
