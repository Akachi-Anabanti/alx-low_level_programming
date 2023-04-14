#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory bloc
 * Return: pointer to the new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, end;
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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		end = old_size;
		/**
		 * ends iteration on the old size
		 * this ensures that the added  memory is left
		 * uninitilized
		 */
	}
	else
		end = new_size;
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < end; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
