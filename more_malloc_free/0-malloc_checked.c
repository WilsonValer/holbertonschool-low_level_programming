#include "main.h"
#include <limits.h>
/**
 **malloc_checked - check the code
 *@b: variable
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b >= UINT_MAX || b == 0)
		exit(98);
	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);

}
