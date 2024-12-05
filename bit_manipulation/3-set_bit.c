#include "main.h"
#include <stddef.h>

/**
*set_bit - bit at position to 1
*@n: numbers to be used
*@index: index to be set
*Return: 1 if it work, -1 on of no
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
