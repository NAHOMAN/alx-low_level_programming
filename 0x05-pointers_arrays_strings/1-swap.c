/**
 * swap_int - swap variable value
 * @a: pointer
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, int *b);
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
