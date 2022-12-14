#include "main.h"

/**
 * _strncat - two string using at most an inputted number of byte from src.
 * @dest: the string appended upon.
 * @src: the string appended to dest.
 * @n: the number of byte from src appended to dest
 * Return: a pointer to the resulting string dust
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0,
	    dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
