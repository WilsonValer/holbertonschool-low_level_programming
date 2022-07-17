#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - check the code
 *@h: variable
 *Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
        int i = 0;

        if (h == NULL)
                return (0);

        while (h != NULL)
        {
                if (h->str == NULL)
                {
                        printf("[0] (nil)\n");
                }
                else
                {
                printf("[%u] %s\n", h->len, h->str);
                }
                h = h->next;
                i++;
        }

        return (i);
}
