#include "main.h"
#include <stdio.h>

/**
 * main - prints number from 1 to 100
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = '1'; i <= 100; i++)
	{
		_putchar(i);
		_putchar(' ');
		for (i % 3 = 0)
			printf("%c", fizz);
		for (i % 5 = 0)
			printf("%c", buzz);
		for (i % 3 = 0 && i % 5 = 0)
			printf("%c", fizzbuzz);
	}
	_putchar('\n');
}
