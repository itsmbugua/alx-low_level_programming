#include "main.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	while (i <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
		_putchar('\n');
	}
	return (0);
}
