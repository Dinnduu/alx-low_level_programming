#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints numbers followed by a new line
 * @separator: string to be printed between two numbers
 * @n: amount of arguments
 * Return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
