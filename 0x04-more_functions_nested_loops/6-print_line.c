#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int c =0;
	while (c <= n)
	{
		_putchar(959);
		c++;
	}
	_putchar('\n);
