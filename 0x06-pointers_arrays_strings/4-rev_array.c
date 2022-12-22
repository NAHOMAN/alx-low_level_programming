#include "main.h"

/**
 * reverse_array - reverse content of an array of integer
 * @a: the array to be reversed
 * @n: the no element in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp - a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
