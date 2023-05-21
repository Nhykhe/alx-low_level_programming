#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: Always (Success)
 */
int main(void)
{
	char alpha, cap;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar('\n');
	}
	return (0);
}
