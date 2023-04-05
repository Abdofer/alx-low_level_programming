#include "main.h"

/**
 * _strlen_recursion -  function returns the length string
 * @s: string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
