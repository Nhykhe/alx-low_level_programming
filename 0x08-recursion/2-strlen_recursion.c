#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a string that calls a function
 *
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
		if (*s != 0)
		{
			l++;
				return(l + _strlen_recursion(s + 1));
		}
	return (l);
}
