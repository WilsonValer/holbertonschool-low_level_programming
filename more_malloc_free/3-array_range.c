#include "main.h"
#include <limits.h>
/**
 **array_range - check the code
 *@min: variable
 *@max: variable
 * Return: Always void
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	if (min < max)
		ptr = malloc(sizeof(int) * (max - min +1));
	if (!ptr)
		return (NULL);

	for (i = 0; i <= max; i++)
		ptr[i] = min;
	return (ptr);

}
