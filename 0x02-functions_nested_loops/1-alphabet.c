#include <stdio.h>
/**
 * main - function that prints the alphabat
 * Return: always 0
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);

	putchar('\n');
	return (0);
}
