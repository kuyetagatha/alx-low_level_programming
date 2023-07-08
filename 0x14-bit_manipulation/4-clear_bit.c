#include "main.h"

/**
 * clear_bit - sets the value of the gi=ven bit to 0
 * @n: Pointer to the number to change
 * @index: Index of the bit to clear
 * Return: 1 on success, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
