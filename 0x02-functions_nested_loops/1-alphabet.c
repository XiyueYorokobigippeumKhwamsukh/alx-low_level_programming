#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints all alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}

