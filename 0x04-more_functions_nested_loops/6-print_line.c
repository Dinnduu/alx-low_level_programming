#include "main.h"

/**
 * print_line - print a line n times
 * @n: integer input
 * Return: Result
*/
void print_line(int n)
{
	if (n > 0)
	{
		_putchar(n * 95);
	}
	else if (n <= 0)
		_putchar('\n');
	_putchar('\n');
}
