#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - check the code
 *@size: variable
 *@array: variable
 *@action: is a funtion pointer
 *Return: Always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  i;

	if (!*array)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
