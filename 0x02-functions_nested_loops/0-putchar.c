#include "holberton.h"
/**
 *main - entry point
 *
 *Description: prints Holberton followed by a newline
 *
 *Return: returns 0(successful)
 *
 */
int main(void)
{
	char holbText[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holbText[i]);
	}
	_putchar('\n');
	return (0);
}
