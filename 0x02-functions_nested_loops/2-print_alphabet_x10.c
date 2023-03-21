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

	while (i <= 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}

}
