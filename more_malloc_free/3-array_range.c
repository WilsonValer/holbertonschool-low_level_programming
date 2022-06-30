#include "main.h"
#include <limits.h>
/**
 **array_range - check the code
 *@min: variable
 *@max: variable
 *Return: Always void
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

		
	ptr = malloc(sizeof(int) * (max - min +1));
	
	if (!ptr)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);

}
