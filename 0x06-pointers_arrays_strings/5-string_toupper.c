#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * @d: input string
 * Return: the pointer to dest
*/
char *string_toupper(char *d)
{
	int i;

	i = 0;
	while (d[i] != '\0')
	{
		if (d[i] >= 'a' && d[i] <= 'z')
			d[i] = d[i] - 32;
		i++;
	}
	return (d);
}
