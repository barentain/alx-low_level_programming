#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a line to the standard error
 *
 * Return: returns 1 when successful
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
