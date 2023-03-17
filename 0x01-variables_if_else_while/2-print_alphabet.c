#include <stdio.h>
/**
 * main - program that prints the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
