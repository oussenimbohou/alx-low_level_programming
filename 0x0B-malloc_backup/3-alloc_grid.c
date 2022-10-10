#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *alloc_grid - Function to return a 2 dim int array
  *@width: integer argument
  *@height: integer argument
  *
  *Return: A 2 dim int array on success or NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid =(int **)malloc(sizeof(int *) * (width));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(sizeof(int) * (height));


	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	return (grid);
}
