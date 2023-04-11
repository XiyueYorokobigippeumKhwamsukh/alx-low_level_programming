#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * *_strdup - a function that returns a pointer to a newly allocated space
  * in memory, which contains a copy of the string given as a parameter
  * @str: string given as a parameter
  * Return: NULL if str = NULL
  * a pointer to the duplicated string.
  * It returns NULL if insufficient memory was available
  */

char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;

	dup = (char *) malloc(len * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	memcpy(dup, str, len);
	return (dup);
}
