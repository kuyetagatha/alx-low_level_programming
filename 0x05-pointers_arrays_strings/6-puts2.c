#include "main.h"

/**
 * puts2 - function should print only one character of the two
 * starting with the first one
 * @str: Input
 * Return: print
 */

void put2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
