#include "main.h"

/**
 * print_line - print a line n times
 * @n: integer input
 * Return: Result
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
