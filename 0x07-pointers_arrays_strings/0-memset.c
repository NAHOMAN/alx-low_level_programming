#include "main.h"

/**
 * *_memset - fills the first n byte to the memory area pointed by @s
 * with constant byte @c
 * s: a pointer to the memory area to be filled
 * b: a character to fill a memory area
 * n: a number of bytes to be filled
 * description _memset: over there
 * Return: a pointer to filled a memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
