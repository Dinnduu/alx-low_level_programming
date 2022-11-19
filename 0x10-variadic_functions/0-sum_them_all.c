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
	va_list p;
	int i, sum;

	va_start(p, i);
	sum
		for (i = n; i > 0)
			sum += va_arg(p, const unsigned int);
	va_end;
	return (sum);
	if n == 0
		return (0);
}
