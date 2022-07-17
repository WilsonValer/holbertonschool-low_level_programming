#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - check the code
 *@h: variable
 *Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;

	if (h == NULL)
		return (0);


	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;

		count++;
	}

	return (count);
}
