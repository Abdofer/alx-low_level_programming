#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum 2 numbers.
 * @a: first integer.
 * @b: second integer.
 * Return: sum (integer)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between 2 numbers.
 * @a: first integer.
 * @b: second integer.
 * Return: difference (integer)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product 2 numbers.
 * @a: first integer.
 * @b: second integer.
 * Return: product (integer)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
