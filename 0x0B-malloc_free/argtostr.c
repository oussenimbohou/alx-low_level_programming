#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *argvtostr - function to convert argv into a string.
  *@ac: integer argument
  *@av: char double pointer
  *
  *Return: NULL if ac = 0 or av = NULL. It returns a pointer
  *to a new string or NULL if it fails.
  */
/*char *argstostr(int ac, char **av)
{
	char **p;
	int i, j, len;
	p = malloc(sizeof(char*) * ac);

	if (ac == 0 || av == NULL)
	{
		free(p);
		return NULL;
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(*(av + i));
		*(p + i) = malloc(sizeof(char) * len);
		for (j = 0; j < len; j++)
			*(*(p + i) + j) = *(*(av + i) + j);
		*(*(p +i) + j) = '\n';
	}
	for (i = 0; i < ac; i++)
		printf("argv[%d] = %s", i, *(p + i));
	return p;
}*/
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k = 0, len = 0, len_;

	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	p = malloc(len * sizeof(char));

	if (ac == 0 || av == NULL)
	{
		free(p);
		return NULL;
	}
	while (k < len)
	{
		for (i = 0; i < ac; i++)
		{
			len_ = strlen(*(av + i));
			for (j = 0; j < len_; k++, j++)
				p[k] = av [i][j];
			p[k++] = '\n';
		}
	}
	p[k] = '\0';
	return p;
}
