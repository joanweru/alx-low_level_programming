#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: void pointer to new memory location or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *lctn, *ptr_new;
	unsigned int j = 0;


		if (new_size == old_size)
			return (ptr);

		if (ptr == NULL)/*heeeeaddd*/
		{
			ptr = malloc(new_size);
			if (ptr == NULL)
				return (NULL);
			return (ptr);/*sheeeee*/
		}

		if (new_size == 0 && ptr)
		{
			free(ptr);
			return (NULL);
		}

		lctn = malloc(new_size);
		ptr_new = ptr;/*dreeeeeeams*/

		if (old_size > new_size)
			old_size = new_size;

		for (j = 0; j < old_size; j++)
			lctn[j] = ptr_new[j];

		free(ptr);
		return (lctn);
}

