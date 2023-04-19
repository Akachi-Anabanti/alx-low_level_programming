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
	struct dog *ptr;

	ptr = d;
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
}
