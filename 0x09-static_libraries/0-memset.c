#include"main.h"

/**
 *_memset - fills memory with a constant byte
 *@n: bytes to be changed
 *@s: address of memory to be filled
 *@b: constant byte with desired value
 *Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
