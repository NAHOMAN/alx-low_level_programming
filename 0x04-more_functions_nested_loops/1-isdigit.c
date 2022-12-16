#include "main.h"
/**
 *_isdigit - functon that verifies is a character is a digit or not
 *@c: tested character
 *Return: return 1 if uppercase, 1 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
		return (0);
}
