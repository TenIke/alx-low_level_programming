#include <stdio.h>
#include "main.h"
/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
        while (*str)
                _putchar(*str++);
        _putchar('\n');
}
