#include "main.h"

/**
  * _isdigit - Checks for a digit
  * @c: caharacter to check if it is a number
  * Return: 1 if c is a digit, 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
