#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char err[] = "Error";
	(void) argc;
	if ((argc - 1) == 2)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{

		printf("%s\n", err);
	}
	return (0);
}
