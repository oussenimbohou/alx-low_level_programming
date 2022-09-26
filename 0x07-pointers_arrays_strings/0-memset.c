#include "main.h"
/**
 * _memset - fills memory with a constant byte (here it's b),
 * @s: memory area,it will act as a buffer.
 * @b: constant byte to be filled in the buffer.
 * @n: bytes filled which the length of the buffer that will
 *be changed.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}

