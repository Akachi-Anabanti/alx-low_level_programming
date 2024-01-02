#ifndef _TASK_ZERO_
#define _TASK_ZERO_
/**
 * struct dog - Dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
