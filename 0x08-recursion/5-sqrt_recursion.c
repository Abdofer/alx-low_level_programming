#include "main.h"

/**
 * check_sqrt - square root of a number
 * @num: input number
 * @root: Rootto be checked
 * Return: Square root if the number square root or -1 if it doesn't
 */

int check_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (check_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns square root of input number
 * @n: integer to find sqrt of
 * Return: Natural square of n if n has a natural square root
 * or -1 if it doesn't
 */

int _sqrt_recursion(int	n)
{
	int root = 0;

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (check_sqrt(n, root));
}
