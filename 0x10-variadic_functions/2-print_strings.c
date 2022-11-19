#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between two numbers
 * @n: amount of arguments
 * Return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	char i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(p, char));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
