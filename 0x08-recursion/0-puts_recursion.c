#include "main.h"

/**
 * _put_recursion - print a string followed by new line
 * @s: a string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_Putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		Putchar('\n');
}
