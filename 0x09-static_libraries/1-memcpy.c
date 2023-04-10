#include"main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @src: area to copy from
 * @dest: area to copy to
 * @n: bytes to be copied
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
