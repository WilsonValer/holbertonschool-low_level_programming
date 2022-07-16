#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *_srtlen - check the code
 *@s: variable
 *Return: Always 0.
 */
int _srtlen(const char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;

	return (size);
}

/**
 *create_nodo - check the code
 *@ptr: variable
 *Return: Always 0.
 */
list_t *create_nodo(const char *ptr)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		free(new);
		return (NULL);
	}
	new->str = strdup(ptr);
	new->len = _srtlen(ptr);
	new->next = NULL;

	return (new);
}
/**
 *add_node - check the code
 *@head: variable head
 *@str: variable
 *Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_node;
	last = *head;

	while (last && last->next  != NULL)
		last = last->next;

	new_node = create_nodo(str);

	if (last)
		last->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
