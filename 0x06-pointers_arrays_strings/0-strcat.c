#include "main.h"

/**
 * @brief strcat - concatenates two strings
 * @param dest - destination string
 * @param src - source string
 * @return pointer to dest
 */

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
