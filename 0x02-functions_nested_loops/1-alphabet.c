#include "main.h"

/**
 * print_alphabet - function prints alphabets in lower case
 *
 * Return: 0 when succesful
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
