#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - numbers of base 10 starting from 0, followed by a new line
*
* Description: using the main function
* this program prints "numbers of base 10 starting from 0, followed by a new line"
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
