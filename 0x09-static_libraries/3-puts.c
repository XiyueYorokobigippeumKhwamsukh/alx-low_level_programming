#include "main.h"

/**
 * _puts - write a terminator
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
