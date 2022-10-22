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
		if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		for ((i % 3 == 0) && (i % 5 == 0))
			printf("fizzbuzz");
	_putchar(i);
	_putchar(' ');
	}
	_putchar('\n');

}
