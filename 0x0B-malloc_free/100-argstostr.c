#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *argstostr - a function that concatenates all
  * the arguments of your program.
  * @ac: argument count
  * @av: array of pointers to arguments
  * Return: NULL if ac == 0 or av == NULL
  * a pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int len, i, j, index;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		len++;
		}
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		str[index] = av[i][j];
		index++;
		}
		str[index] = '\n';
		index++;
	}
		str[index] = '\0';
		return (str);
}
