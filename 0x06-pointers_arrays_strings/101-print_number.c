#include "main.h"

/**
 *print_number - print a number using _putchar.
 *@n: the number to be printed.
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / i) >= 10)
			i *= 10;

		while (i > 0)
		{
			_putchar((n / i) + '0');
			n %= i;
			i /= 10;
		}
	}
}
