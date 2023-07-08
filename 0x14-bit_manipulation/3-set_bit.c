#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: Pointer to the number to be change
 * @index: index of the bit to set to 1
 * Return: On success 1, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
