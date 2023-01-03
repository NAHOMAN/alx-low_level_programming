#include <main.h>

/**
 * _memset - fills the first n byte to the memory area pointed by @s
 * with constant byte @c
 * *s - a pointer to the memory area to be filled
 * b - a character to fill a memory area
 * n - a number of bytes to be filled
 * Return: a pointer to filled a memory area.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int *s = index;
	unsigned char *memory = s, value = c;
	unsigned int n = src;

	for (index = 0; index < n; index++)
		memory[index] = value;

		return (memory);
}
