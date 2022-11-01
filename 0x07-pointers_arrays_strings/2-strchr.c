#include "main.h"

/**
 * *_strchr - function that locates acharacter in a string
 * @c: character input
 * @s: string input
 * Return: first c in s, NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
