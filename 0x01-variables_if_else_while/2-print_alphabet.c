#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
 * main - main block of code
 * description - print alphabet
 * in lowercase
 *
 *
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
