#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - check the code
 *@h: variable
 *Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
		const listint_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}

	return (i);
}
