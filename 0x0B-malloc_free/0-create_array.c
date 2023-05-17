#include <stdlib.h>
#include "main.h"

/**
 * *crreate_array - create an array of chars, and initializes
 * it with a specific char.
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);

if (size == 0 || array == 0)
return (NULL);
while (size--)
array[size] = c;
return (array);
}
