#include "main.h"

/*----------------------------------------------------------------
 * Function: _strcat
 * Description: concatenates two strings
 * Input: char *dest, char *src
 * Output: char *dest
 * Return: char *dest
 *----------------------------------------------------------------*/
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
