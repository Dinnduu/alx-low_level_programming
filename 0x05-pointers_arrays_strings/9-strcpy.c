#include "main.h"

/**
 * *_strcpy - function that copies the string to another buffer
 * @src: source
 * @dest: destination
 * Return: pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
