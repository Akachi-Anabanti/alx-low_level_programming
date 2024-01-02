#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - calculates the length of a string
 *
 * @str: The string to be measured
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
/**
 * _strdup - duplicates a string
 * and returns a pointer to the string
 *
 * @str: The string to be duplicated
 * Return: The new string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * _strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';
	return (new_str);
}
/**
 * new_dog - creates a new dog
 *
 * @name: Name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: pointer ot new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	my_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	my_dog->name = _strdup(name);
	my_dog->owner = _strdup(owner);
	my_dog->age = age;

	return (my_dog);
}
