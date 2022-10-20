#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character input
 * Return: 1 on success, 0 for the rest
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
