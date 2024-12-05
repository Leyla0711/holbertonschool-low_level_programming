#include "main.h"
#include <stddef.h>

/**
*clear_bit - bit at a position to 0
*@n: numbers to be used
*@index: position to be cleared
*Return: 1 on if work -1 on if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
