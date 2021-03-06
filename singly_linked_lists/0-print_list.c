#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - check the code
 *@h: variable
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
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
		else
		{
		printf("[%u] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		i++;
	}

	return (i);
}
