#include "main.h"
#include <stdio.h>

/**
 *print_buffer - Print a buffer 10 bytes per line.
 *@b: Buffer address.
 *@size: Number of characters to be printed.
 */
void print_buffer(char *b, int size)
{
	int i, pi, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 9, pi = 0; i < size; i += 10)
		{	printf("%.8x: ", pi);
				for (c = pi; c <= i ; c++)
				{	printf("%.2x", b[c]);
					if (c % 2 == 1)
						printf(" ");	}
				for (c = pi; c <= i ; c++)
				{
					if (b[c] < 32)
						printf(".");
					else
						printf("%c", b[c]);	}
					printf("\n");
					pi = i + 1;	}
		if (pi < size - 1)
		{	i -= 9;
			printf("%.8x: ", i);
			for (c = i; c < i + 10; c++)
			{
				if (c < size)
					printf("%.2x", b[c]);
				else
					printf("  ");
				if (c % 2 == 1)
					printf(" ");	}
			for (; i < size ; i++)
			{
				if (b[i] < 32)
					printf(".");
				else
					printf("%c", b[i]);
			}
			printf("\n");	}	}	}
