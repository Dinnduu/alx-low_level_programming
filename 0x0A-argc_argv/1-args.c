#include <stdio.h>

/**
 * main - program that prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("argc = %d\n", argc);
	return (0);
}
