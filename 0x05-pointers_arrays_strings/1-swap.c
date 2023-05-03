#include <stdio.h>

/**
 * Swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 * main: This function swaps the values of two integers
 * Return: void
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
int m;

m = *a;
*a = *b;
*b = m;
}
