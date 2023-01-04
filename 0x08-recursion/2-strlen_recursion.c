#include "main.h"

/**
 * _strlen_recursion - return the length to string
 * @s: string to be measured
 * Return: the length to string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
