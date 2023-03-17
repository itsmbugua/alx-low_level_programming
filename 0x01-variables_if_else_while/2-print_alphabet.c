#include <stdio.h>
/**
 * main - program that prints the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
