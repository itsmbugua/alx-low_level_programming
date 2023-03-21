#include "main.h"

/**
 * _isalpha -checking for alphabetic characters
 * @c: is the character we are checking
 * Return: 1 if c is a character otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
