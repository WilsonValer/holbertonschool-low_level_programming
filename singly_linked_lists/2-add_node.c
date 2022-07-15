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
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = create_nodo(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
