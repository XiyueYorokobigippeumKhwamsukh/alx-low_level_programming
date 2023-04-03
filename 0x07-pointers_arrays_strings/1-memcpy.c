#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j = 0;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
