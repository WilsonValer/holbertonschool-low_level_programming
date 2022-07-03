#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - check the code
 *@name: variable
 *@f: variable
 *Return: Always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(size);
}
