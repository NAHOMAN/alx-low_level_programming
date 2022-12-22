#include "main.h"

/**
 * strcat - the string pointed to by @src.include the terminate null byte to the end string pointed by dest.
 * @dest: a pointer to string
 * @src: the source string to be appended to @dest.
 * Return: a pointer to destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	
	while(dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
