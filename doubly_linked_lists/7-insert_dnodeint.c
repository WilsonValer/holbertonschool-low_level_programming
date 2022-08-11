#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index- check the code
 *@h: pointer variable
 *@idx: variable
 *@n: variable
 *Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        size_t i;
        dlistint_t *new_node;
        dlistint_t *temp;

        if (idx == 0)
        {
                return (add_dnodeint(h, n));
        }
		temp = *h;
        new_node = create_nodo(n);
        for (i = 0; temp && i < idx; i++)
        {
                if (i == idx - 1)
                {
                        new_node->next = temp->next;
                        temp->next = new_node;
						new_node->prev = temp;
                        return (new_node);
                }
                else
                        temp = temp->next;
        }
        return (NULL);
}
