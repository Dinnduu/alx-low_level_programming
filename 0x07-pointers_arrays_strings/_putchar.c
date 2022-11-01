#include <unistd.h>
#include 

/**
 * _putchar - write the character c to stdout
 * @c: character input
 * Return: on success 1
*/
void _putchar(char c)
{
	return (write(1, &c, 1));
}
