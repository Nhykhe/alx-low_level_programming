#include "main.h"
/**
 * print_alphbet_x10 - a function that prints x10 the alphabet
 * in lower case, followed by a newline
 *
 * Return: x10 a-z
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
