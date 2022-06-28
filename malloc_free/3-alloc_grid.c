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

	int **str = (int **)malloc(16 * width * sizeof(int *));

	for (i = 0; i < width; i++)
	str[i] = (int *)malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			str[i][j] = 0;
	}
	return (str);
}
