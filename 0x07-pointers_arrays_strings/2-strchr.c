#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first character c to s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		i++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
