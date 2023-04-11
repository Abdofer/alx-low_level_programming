#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns pointer 2 dimensional array integers.
 *@width: Widtch array.
 *@height: Height array.
  *Return: NULL if funtion fails width or height <= 0
 *	Pointer if sucess
 */

int **alloc_grid(int width, int height)
{
	int **dim_arr;
	int i1, i2;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim_arr = malloc(sizeof(int *) * height);

	if (dim_arr == NULL)
		return (NULL);

	for (i1 = 0; i1 < height; i1++)
	{
	dim_arr[i1] = malloc(sizeof(int) * width);

		if (dim_arr[i1] == NULL)
		{
			for (; i1 >= 0; i1--)
				free(dim_arr[i1]);

			free(dim_arr);
			return (NULL);
		}
	}

	for (i1 = 0; i1 < height; i1++)
	{
		for (i2 = 0; i2 < width; i2++)
			dim_arr[i1][i2] = 0;
	}

	return (dim_arr);
}
