#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *create_nodo - check the code
 *@s: variable
 *Return: Always 0.
 */
dlistint_t *create_nodo(const int s)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = s;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
/**
 *add_dnodeint_end - check the code
 *@head: variable head
 *@n: variable
 *Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = NULL;
	dlistint_t *new_node = NULL;

	last_node = *head;
	new_node = create_nodo(n);
	if (last_node)
	{
		while (last_node && last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
		new_node->prev = last_node;
	}
	else
		*head = new_node;
	return (new_node);
}
