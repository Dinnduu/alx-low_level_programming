#include "main.h"

/**
 * print_alphabet - prints the alphabet times ten in lowercase followed by a new line
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int a, i;

	for (a = 0; a <=9; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
