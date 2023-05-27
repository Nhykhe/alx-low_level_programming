#include "main.h"
/**
 * print_alphbet_x10 - prints the alphabet x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 0;

	while (count < 10 * 26)
	{
		_putchar(c);
		count++;
		if (count % 26 == 0)
		{
			_putchar('\n');
			c = 'a';
		}
		else
		{
			c++;
		}
	}
}
