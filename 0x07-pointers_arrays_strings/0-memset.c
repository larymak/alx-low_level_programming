#include "main.h"

/**
 * @char *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */

char *_memset(char *dest, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = b;

    return (dest);
}