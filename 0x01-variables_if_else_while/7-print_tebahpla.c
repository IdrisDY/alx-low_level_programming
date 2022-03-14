#include <stdio.h>

/**
 * main - print the latterss of the alphabet
 * Description: reverse the letters and printout
 * return: 0(sucess)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
