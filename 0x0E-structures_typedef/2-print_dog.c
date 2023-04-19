#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the infos about the dog
 * @d: the pointer to the dog struct
 */
void print_dog(struct dog *d)
{

	if (!d)
		return;
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
