#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: the number to print in binary
  * Return: binary representation of a number
  */

void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int leading_zeros;

	for (k = 63; k >= 0; k--)
	{
		leading_zeros = n >> k;

		if (leading_zeros & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
