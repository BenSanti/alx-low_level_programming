#include "main.h"

/**
 * print_line - Draws a straight line according to parameters
 * @n: the number of lines to draw
 * Return: 0 empty
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	} 
	else
	{
	for (x = 1; x <= n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}

