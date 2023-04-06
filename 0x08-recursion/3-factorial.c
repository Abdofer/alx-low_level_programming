#include "main.h"

/**
 * factorial -  factorial of given number
 * @n: integer
 * Return: Factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
