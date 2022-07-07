#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 **new_dog - Prints a struct dog
 * @name: pointer to struct dog
 * @age: variable
 * @owner: variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc (sizeof (new_dog));
	if (!new_dog)
		return (NULL);

	(*new_dog).name = malloc((strlen(name) + 1) * sizeof(char));
	if (!*new_dog.name)
	{	free(*new_dog.name)
			return (NULL);
	}

	(*new_dog).name = malloc((strlen(owner) + 1) * sizeof(char));
	if (!*new_dog.owner)
	{
		free(*new_dog.owner)
			return (NULL);
	}

	strcpy((*nw_dog.name, name);
	strcpy((*new_dog.owner, owner);
	(*new_dog.age = age;		


}
