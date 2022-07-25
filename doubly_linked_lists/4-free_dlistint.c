#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - check the code
 *@head: variable
 *Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	 dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
