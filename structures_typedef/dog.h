#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - Basic atributtes of a dog
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
