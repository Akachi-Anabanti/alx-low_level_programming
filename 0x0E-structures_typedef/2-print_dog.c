#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints the infos about the dog
 * @d: the pointer to the dog struct
 */
void print_dog(struct dog *d)
{
	struct dog *ptr;

	ptr = d;

	if (ptr ==  NULL)
		return;
	if (ptr->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.6f\n", ptr->age);
		printf("Owner: %s\n", ptr->owner);
	}
	else if (ptr->age == 0.0)
	{
		printf("Name: %s\n", ptr->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", ptr->owner);
	}
	else if (ptr->owner == NULL)
	{
		printf("Name: %s\n", ptr->name);
		printf("Age: %.6f\n", ptr->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", ptr->name);
		printf("Age: %.6f\n", ptr->age);
		printf("Owner: %s\n", ptr->owner);
	}
}
