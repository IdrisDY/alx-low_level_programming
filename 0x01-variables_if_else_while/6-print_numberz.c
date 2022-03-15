#include <stdio.h>

/**
 * main - main code block
 *
 * Desciption: print single digit
 *
 * Return:  always 0(sucess)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}

