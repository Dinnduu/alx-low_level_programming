#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: result on success and error on failure followed by 1
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("%s\n", Error);
		return (1);
	}
}
