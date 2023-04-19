#include "dog.h"
/**
 * init_dog - initializes dog variable
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog;

	d = &dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
