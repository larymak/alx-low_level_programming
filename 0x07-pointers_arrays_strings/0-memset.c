#include "main.h"

/**
 * @char *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */

char *_memset(char *s, char b, insigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i < n)
			s[i] = b;
	}
	return (s);
}
