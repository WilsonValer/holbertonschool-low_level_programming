#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index- check the code
 *@index: variable
 *@head: variable
 *Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	 dlistint_t *current;
	unsigned int count;

	current = head;
	count = 0;
	while (count < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		count++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
