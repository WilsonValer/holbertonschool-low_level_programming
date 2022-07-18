#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *create_nodo - check the code
 *@s: variable
 *Return: Always 0.
 */
listint_t *create_nodo(const int s)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = s;
	new->next = NULL;

	return (new);
}
/**
 *add_nodeint_end - check the code
 *@head: variable head
 *@n: variable
 *Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *new_node;

	last_node = *head;

	new_node = create_nodo(n);
	if (last_node)
	{
		while (last_node && last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
