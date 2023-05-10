#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return the natural square root of a numbeer
 * @n: number to calculate the square root of 
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (1 * i > n)
		return (-1);
	if (1 * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i +1));
}
{
	if (1 * i > n)
		return (-1);
	if (1 * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}