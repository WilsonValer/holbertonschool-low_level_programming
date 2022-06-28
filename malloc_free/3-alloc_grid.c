#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 ***alloc_grid - check the code
 *@width: variable
 *@height: variable
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{

	int i;
	int j;
	int q;

	int **str = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{	str[i] = (int *)malloc(width * sizeof(int));
		if (!str[i])
		{
		free(str[i]);
		return (NULL);
		}
	}

	for (q = 0; q < height; q++)
	{
		for (j = 0; j < width; j++)
			str[q][j] = 0;
	}
	return (str);
}
