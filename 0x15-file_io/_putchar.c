#include <unistd.h>

/**
 * _putchar - writes character c stdout.
 * @c: The character print.
 *
 * Return: On success 1
 * On error, -1 is returned, and errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
