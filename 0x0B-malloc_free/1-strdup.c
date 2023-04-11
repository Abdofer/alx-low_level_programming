#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer newly allocated space memory
 *@str: string duplicated.
 *Return: NULL if str=NULL or insufficient memory
 *        Pointer duplicated string if sucess
 */

char *_strdup(char *str)
{
	char *dup;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[length] = '\0';

		return (dup);
}
