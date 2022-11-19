#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed between two numbers
 * @n: amount of arguments
 * Return: no return
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
	       	i = va_arg(p, int);
		printf("%d", i);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
