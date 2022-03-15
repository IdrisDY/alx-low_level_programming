#include <stdio.h>

/**
 * main - print single digits
 * Descripton: print single digits between
 * 48 and 58
 * return: always 0 (exit)
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
