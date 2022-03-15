#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
* main - main block of code
* Description - use putchar to print alphabet in lowercase
* return : 0
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
