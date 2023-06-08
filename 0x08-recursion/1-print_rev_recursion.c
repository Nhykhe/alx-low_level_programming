#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints string in reverse
 * @s: a string that calls a character
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		putchar (*s);
	}
}
