#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - Inventing is a combination of brains and material
*
* Description: using the main function
* this program prints "Inventing is a combination of brains and material"
* Return: 0
*/
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
