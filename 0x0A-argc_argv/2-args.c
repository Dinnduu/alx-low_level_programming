#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	if (i > 1)
	{
		for (i = 1, i < argc, i++)
			printf("%s\n", argv[i]);
	}
}
