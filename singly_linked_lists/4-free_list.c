#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_list - check the code
 *@head: variable
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *delete;

	while (head != NULL)
	{
		delete = head;
		head = head->next;
		free(delete);
	}
}
