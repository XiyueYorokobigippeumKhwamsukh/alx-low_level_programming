#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to be searched
  * @index: the index, starting from 0 of the bit you want to get
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
