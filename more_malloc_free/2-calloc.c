#include "main.h"
#include <limits.h>
/**
 **_calloc - check the code
 *@nmemb: variable
 *@size: variable
 * Return: Always void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);


	return (ptr);

}
