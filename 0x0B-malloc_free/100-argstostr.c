#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *argstostr - a function that concatenates all
  * the arguments of your program.
  * @ac: argument 1
  * @av: argument 2
  * Return: NULL if ac == 0 or av == NULL
  * a pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *result;
	int current_pos;
	int arg_length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *) malloc(total_length * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	current_pos = 0;

	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);

		memcpy(result + current_pos, av[i], arg_length);

		current_pos += arg_length;
		result[current_pos] = '\n';
		current_pos++;
	}
	return (result);
}
