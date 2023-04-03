#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; (s[a] != c) && (s[a] != '\0'); a++)
		;
	if (s[a] == c)
		return (s + a);
	else
		return (NULL);
}
