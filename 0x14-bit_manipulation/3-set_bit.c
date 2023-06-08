#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @index: Index of the the bit to set to 1
 * @n: The pointer to the number to change
 *
 * Return: 1 on success, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
