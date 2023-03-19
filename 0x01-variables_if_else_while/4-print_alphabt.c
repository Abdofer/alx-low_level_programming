#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - alphabet soup, I never thought that it would pay off
*
* Description: using the main function
* this program prints "alphabet soup, I never thought that it would pay off"
* Return: 0
*/

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
