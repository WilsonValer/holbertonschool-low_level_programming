#include "main.h"
/**
 **_calloc - check the code
 *@nmemb: variable
 *@size: variable
 * Return: Always void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, final_size = nmemb * size;
	char *str = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(final_size);

	if (!str)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < final_size; i++)
		str[i] = 0;

	return (str);
}
