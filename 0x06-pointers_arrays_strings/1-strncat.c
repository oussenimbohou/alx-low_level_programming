#include "main.h"

/**
  *_strlen - To compute the length of the string.
  *@str: A pointer character argument
  *
  *Return: The length of the string.
  */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

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
	int len  = _strlen(dest);
	int i = 0;

	while (*src != '\0' && i < n)
	{
	*(dest + len + i) = *src;
		src++;
		i++;
	}
	*(dest + _strlen(dest)) = '\0';
	return (dest);
}
