#include <stdio.h>
/**
 * main - print all number combination
 * Return: Always o;
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
