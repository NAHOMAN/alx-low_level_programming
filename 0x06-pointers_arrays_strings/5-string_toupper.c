#include "main.h"

/**
 * string_toupper - change lowercase letter of string to uppercase
 * @str: the string to be changed
 * Return: a pointer to the changed string
 */
char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
