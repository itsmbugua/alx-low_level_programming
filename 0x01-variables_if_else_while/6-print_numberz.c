#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		pitchar(n);
	}
	putchar('\n');
	return (0);
}
