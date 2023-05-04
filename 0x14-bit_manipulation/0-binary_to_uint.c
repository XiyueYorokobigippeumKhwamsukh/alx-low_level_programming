#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: string that contains the binary number
  * Return: the converted number,
  * or 0 if there is one or more chars in the string b that is not 0 or 1
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int k;

	if (!b)
	{
		return (0);
	}

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}

		convert = convert * 2 + (b[k] - '0');
	}

	return (convert);
}
