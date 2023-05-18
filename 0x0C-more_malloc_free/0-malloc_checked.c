#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - using malloc allocate memory
 * @b: number of bytes allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
