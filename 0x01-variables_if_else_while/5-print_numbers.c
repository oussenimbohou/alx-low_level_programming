#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int count;

	count  = 0;
	while (count < 10)
		printf("%d", count++);
	printf("\n");
	return (0);
}
