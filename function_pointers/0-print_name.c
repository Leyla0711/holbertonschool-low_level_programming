#include "function_pointers.h"

/**
 * print_name - Prints a name 
 * @name: code to print a name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
