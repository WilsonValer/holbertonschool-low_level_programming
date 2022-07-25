#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - check the code
 *@head: variable
 *Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
