#include "main.h"


/**
  *_strncat - Customized stract function to concatenate strings.
  *@dest: A destination pointer string that will be the final string.
  *@src: A source pointer string string that will be appended to
  *the destination.
  *@n: Integer argument for the copy limit
  *
  *Return: It will return the concatenated string of dest and src
  */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	while (*(src + len) != '\0')
		len++;

	while (*src != '\0' && i < n)
	{
		*(dest + len - 1 + i) = *src;
		src++;
		i++;
	}
	*(dest + len + n) = '\0';
	return (dest);
}
