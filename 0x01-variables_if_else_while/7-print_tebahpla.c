#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - this prints the lowercase in reverse other
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
