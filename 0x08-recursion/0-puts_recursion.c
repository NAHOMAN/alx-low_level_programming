#include "main.h"

/**
 * _puts_recursion - print a string followed by new line
 * @s: a string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		char(*s);
		puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
