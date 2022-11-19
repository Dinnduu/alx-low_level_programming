#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input constant integer
 * Return: sum, if n == 0, 0
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	else
	va_list p;
	int i, sum;

	va_start (p, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (p, const unsigned int);
	va_end (p);
	return (sum);
}
