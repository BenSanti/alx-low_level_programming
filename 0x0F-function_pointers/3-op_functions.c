#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: a and b added to together
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: The quotient or division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modolus or remainder of the division of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
