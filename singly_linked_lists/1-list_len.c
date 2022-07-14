#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - check the code
 *@h: variable
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int i = 0;
		const list_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		current_node = current_node->next;
		i++;
	}

	return (i);
}
