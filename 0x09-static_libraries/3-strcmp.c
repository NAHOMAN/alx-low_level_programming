#include "main.h"

/**
 * _strcmp - compair two string
 * @s1: first string
 * @s2: second string
 * Return: success
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
