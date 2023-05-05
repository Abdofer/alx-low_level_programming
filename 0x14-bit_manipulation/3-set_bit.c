#include "main.h"

/**
 * set_bit - sets value of bit 1 at given index.
 * @n: integer.
 * @index: index set 1.
 * Return: integer.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mask = 1;
	*n = *n | (mask << index);

	return (1);
}
