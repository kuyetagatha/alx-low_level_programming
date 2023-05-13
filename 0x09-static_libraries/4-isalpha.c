#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: character to checked
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
