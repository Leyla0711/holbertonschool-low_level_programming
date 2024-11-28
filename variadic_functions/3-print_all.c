#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */

void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_integer - Prints an integer
 * @ap: Argument pointer
 */

void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */

void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}


/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	checker storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
