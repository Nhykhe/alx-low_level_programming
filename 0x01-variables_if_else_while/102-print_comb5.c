#include <stdio.h>
/**
 * main - prints all possible combinations of two digit
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x < 57; x++)
	{
	for (y = x; y < 57; y++)
	if (x == 0 && y == 0)
		continue;
	}
	putchar(x / 48 + '0');
	putchar(x % 48 + '0');
	putchar(' ');
	putchar(y / 48 + '0');
	putchar(y % 48 + '0');
	if (!(x == 56 && y == 56))
	{
	putchar(',');
	putchar(' ');
	}
return (0);
}

