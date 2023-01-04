#include "main.h"

/**
 * _pow_recursion - return the value of x rasied to the power of y
 * @x: the number to be rasied
 * @y: the power
 * Return: the value of x rasied to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return(-1);
	}

	else if (y == 0)
	{
		return(1);
	}
	return(result);
}
