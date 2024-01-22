#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Element to be initialized
 * @age: Another element to be initialized
 * @owner: Final element to be intialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	else if (d == NULL)
		d = malloc(sizeof(struct dog));
}
