#include "main.h"

/**
*clear_bit - sets a bit at a position to 0
*@n: number to be used
*@index: position to be cleared
*
*Return: 1 on success, -1 on fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
