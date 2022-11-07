#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: result on success and error on failure followed by 1
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	if (i == 2)
		printf("%d\n", argv[1] * argv[2]);
	else if (i < 2 && i > 2)
		printf("%s\n", Error);
	return (1);
}
