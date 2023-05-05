#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index.
 * @n: integer.
 * @index: index set 1.
 * Return: integer (1 success, -1 error).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mask = 1;
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
