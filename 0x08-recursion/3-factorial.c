#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: integer
 * Return: result if n is greater than 1, 1 if n is 1 or 0, -1 if n is less
 * than 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
