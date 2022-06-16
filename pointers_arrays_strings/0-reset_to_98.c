#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value it points to to 98
 * Return: return void
 */
void reset_to_98(int *m)
{
	printf("value of 'n': %p\n",(void *)m);
	printf("address of 'n': %p\n", (void *)&m);
	*m = 98;
}
