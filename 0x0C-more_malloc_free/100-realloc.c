#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size the size in bytes of the allocated space for ptr
 * @new_size the new size in bytes of the new memory bloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL && new_size != 0)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
		size = new_size ;
	else
		size = new_size;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(size);

	if(new_ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free (ptr);

	return (new_ptr);
}
