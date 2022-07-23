#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint- check the code
 *@h:variable
 *Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h && h ->prev)
		h = h->prev;

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}

	return (i);
}
