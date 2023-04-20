#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: first parameter of the unsigned function
  * @...: indicate that the function accepts a variable
  * number of arguments of any type
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
