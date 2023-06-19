#include <stdio.h>
#include "main.h"
/**
* _abs - computes absolute value of a value
* @a: integer
* description : computes integer
*
* Return: absolute value
*/
int _abs(int a)
{
        if (a > 0)
        {
                a = +a;
        }
        else
        {
                a = -a;
        }
        return (a);
}
