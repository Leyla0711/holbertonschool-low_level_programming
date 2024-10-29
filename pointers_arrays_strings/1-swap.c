#include "main.h"

/**
 * swap_int-swaps the value the values of two integers
 * pointer points to a first value
 * pointer points to a second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
