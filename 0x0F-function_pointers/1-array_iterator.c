#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element array.
 * @array: Array
 * @size: Size of array
 * @action: Pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
