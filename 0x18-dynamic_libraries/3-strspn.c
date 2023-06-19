#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes that compose the length
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int bytes = 0;
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (accept[i] == *s)
                        {
                                bytes++;
                                break;
                        }
                        else if ((accept[i + 1]) == '\0')
                                return (bytes);
                }
                s++;
        }
        return (bytes);
}
