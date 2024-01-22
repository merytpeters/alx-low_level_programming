#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints struct dog
 * @d: Pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "Name: (nil)";
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
