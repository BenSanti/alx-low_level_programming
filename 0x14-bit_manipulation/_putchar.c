#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: The character
 * Return: On success 1.
 * On error, -1 is returned and erro is set 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
