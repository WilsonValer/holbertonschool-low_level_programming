#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - check the code
 *@head: variable
 *Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

		tmp = *head;
		num = tmp->n;
		*head = (*head)->next;
		free(tmp);

		return (num);
}
