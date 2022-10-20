#include <unistd.h>
#include "main.h"

/**
 * _putchar - wites the character c to stdout
 * @c: the character to print
 * Return: 1 (Success), else -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
