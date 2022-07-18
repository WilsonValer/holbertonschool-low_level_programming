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
 *add_nodeint - check the code
 *@head: variable head
 *@n: variable
 *Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = create_nodo(n);

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
