#include <stdio.h>

/**
 * main - Prints base 16 numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	char alp[6] = "abcdef";

	for (i = 0; i < 6; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
