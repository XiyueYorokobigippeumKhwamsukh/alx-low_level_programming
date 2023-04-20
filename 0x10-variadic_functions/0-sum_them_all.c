#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: first parameter of the unsigned function
  * @...: indicate that the function accepts a variable
  * number of arguments of any type
  * Return: If n == 0 - 0.
  * Otherwise - the sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
