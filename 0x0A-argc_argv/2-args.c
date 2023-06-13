#include <stdio.h>

/**
 * main - prints all arguement it receives
 * @argv: arguement vector
 * @argc: arguement count
 *
 * Return: 0 on success
 */
int main(int argc, char* argv[])
{
	int i;

	printf("The program received %d arguments.\n", argc - 1);
	for (i = 1; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}
return 0;
}
