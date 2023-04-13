#include "main.h"
#include <stdlib.h>

/**
 *Malloc_checked -Function allocates memory using malloc
 *@b: integer.
 *Return: Pointer allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
