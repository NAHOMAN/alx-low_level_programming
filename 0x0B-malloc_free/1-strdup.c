#include "main.h"

/**
 * _strlen - count array
 * @s: array of element
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0') /** count character of string*/
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - ciopy array
 * @str: array of element
 * @dest: dest array
 * Return: dest
 */
char *_strcpy(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - array for print a string
 * @str: array of elementt
 * Return: pointers
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
