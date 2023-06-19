#include "main.h"
#include <stdio.h>
/**
*_islower - function name
*
*Description: checks if it is caselower
*
*@a: The character in ASCII code
*
*Return: 1 for lowercase. 0 for the rest
*
*/
int _islower(int a)
{
        if (a >= 97 && a <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
