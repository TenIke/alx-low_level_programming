#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
        int a;

        while (*s)
        {
                for (a = 0; accept[a]; a++)
                {
                        if (accept[a] == *s)
                                return (s);
                }
                s++;
        }
        return ('\0');
}
