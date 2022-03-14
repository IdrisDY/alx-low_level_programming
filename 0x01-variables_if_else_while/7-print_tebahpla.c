#include <stdio.h>

/**
 * main - main code black
 * Description: reverse the letters and printout
 * return: always 0(sucess)
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
