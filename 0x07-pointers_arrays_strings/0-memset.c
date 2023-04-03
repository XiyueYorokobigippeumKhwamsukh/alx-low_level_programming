#include "main.h"

/**
  * *_memset - function that fills memory with a constant byte.
  * @s: This is a pointer to the memory area that will be
  * filled with the constant byte b
  * @n: This is the number of bytes to fill with the constant byte b
  * @b: This is the constant byte that will be used to
  * fill the memory area pointed to by s
  * Return: a pointer to the memory area s
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
