#include <unistd.h>

/**
 * main - a program or fo function that prints a line to the standard error
 *
 * Return: 1 when successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
