#include "main.h"

/**
  *_strcat - Customized stract function to concatenate strings.
  *@dest: A destination pointer string that will be the final string.
  *@src: A source pointer string string that will be
  *appended to the destination.
  *
  *Return: It will return the concatenated string of dest and src
  */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
		len++;
	while (*src != '\0')
	{
		*(dest + len + i) = *src;
		src++;
		i++;
	}
	*(dest + len + i) = '\0';
	return (dest);
}
