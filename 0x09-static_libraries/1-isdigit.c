#include "main.h"

/**
 * _isdigit - checks for a digit from 0 - 9
 * @c: character input
 * Return: 1 on success, 0 for the rest
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
