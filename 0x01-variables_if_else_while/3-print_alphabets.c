#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  alphABET
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char app[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
	for (i = 0; i < 26; i++)
	{
		putchar(tolower(app[i]));
	}
	for (i = 0; i < 26; i++)
	{
		putchar(toupper(app[i]));
	}
putchar('\n');
return (0);
}
