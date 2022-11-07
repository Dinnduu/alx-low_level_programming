#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 success
*/
int main(int argc, char *argv)
{
	int i, sum = 0;

	if argc < 2
		printf("0\n");
	else
	{
		if (isdigit(argv[1]; argv++)
			for (i = 1; i < argc; i++)
				printf("%d\n", sum += atoi(argv[i]));
		return (0)
		else
		{
			printf("Error\n");
			return (1);
		}
	}
}
