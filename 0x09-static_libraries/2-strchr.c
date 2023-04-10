#include "main.h"

/**
 * _strchr - locates character in string.
 *
 * @c: occurrence of character.
 *
 * @s: in the string
 *
 * Return: a pointer to first occurrence of character.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

		return (0);
}
