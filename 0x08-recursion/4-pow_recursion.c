#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y
  * @x: base value
  * @y: power raised over base value
  * Return: value of x raised to the power of y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y % 2 == 0)
	{
		int temp = _pow_recursion(x, y / 2);

		return (temp * temp);
	}
	else
	{
		int temp = _pow_recursion(x, y / 2);

		return (x * temp * temp);
	}
}
