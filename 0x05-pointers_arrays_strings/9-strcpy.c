#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - copoies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointer to by dest
 *
 * @dest : a pointer to the string where to copy the content of @src
 * @src : a pointer to the string to be copied
 *
 * Return : char *
 */
char *_strcpy(char *dest, char *src)
{
        int length;
        int i = 0;

        while (*src != '\0')
        {
               length++;
               src++;
        }
        src = src - length;

        while (i < length)
        {
                *(dest + i) = *(src + i);
                i++;
        }
        dest[i] = '\0';

        return (dest);
}
