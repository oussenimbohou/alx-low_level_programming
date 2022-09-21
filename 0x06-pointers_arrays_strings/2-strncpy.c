#include "main.h"

/**
  *_strncpy - To copy n character from the sorce string to
  *the destination string
  *@dest: The pointer char where the character will be copied
  *@src: The pointer char from where the character will be copied
  *@n: Integer argument which ic the number of character to be copied
  *Return: The copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int  i = 0;

	while (*src != '\0' && i < n)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}

