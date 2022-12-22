#include "main.h"

/**
 * rot13 - encoded a string using rot13.
 * @str - a string to be encoded.
 * Return: a pointer to the encoded string.
 */
char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K' , 'L',
		'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T'
