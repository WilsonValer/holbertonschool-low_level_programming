#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len- check the code
 *@h: variable
 *Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
		const dlistint_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}

	return (i);
}
