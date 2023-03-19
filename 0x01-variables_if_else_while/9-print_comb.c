#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers.
*
* Description: using the main function
* this program prints "possible combinations of single-digit numbers"
* Return: Always 0 (Succès)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
