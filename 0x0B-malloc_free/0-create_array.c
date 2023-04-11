#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * *create_array - creates an array of chars,
  * and initializes it with a specific char
  * @c: array of characters
  * @size: size of array
  * Return: NULL if size = 0
  * pointer to the array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
