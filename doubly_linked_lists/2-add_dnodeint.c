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
	dlistint_t *new;

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
 *add_dnodeint- check the code
 *@head: variable head
 *@n: variable
 *Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = create_nodo(n);

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (*head);
}
