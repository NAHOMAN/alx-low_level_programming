#include "main.h"

/**
 * is_prime_number - check if n is prime number
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (0);
}
/**
 * check_prime - check the number
 * @n: int
 * @resp: int
 * Return: int
 */
int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (int);
}
