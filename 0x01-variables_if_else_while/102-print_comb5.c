#include <stdio.h>
/**
 * main - prints all possible combinations of two digit
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
	for (y = x; y < 100; y++)
	if (x == 0 && y == 0)
		continue;
	}
	putchar(x / 10 + '0');
	putchar(x % 10 + '0');
	putchar(' ');
	putchar(y / 10 + '0');
	putchar(y % 10 + '0');
	if (!(x == 99 && y == 99))
	{
	putchar(',');
	putchar(' ');
	}
return (0);
}

