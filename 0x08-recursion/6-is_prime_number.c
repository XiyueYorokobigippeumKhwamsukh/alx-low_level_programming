#include "main.h"

/**
  * is_prime_number - returns 1 if the input integer is a prime number
  * otherwise return 0
  * @n: input integer
  * Return: 1 if prime number else 0
  */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}
