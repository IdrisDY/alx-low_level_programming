#include <stdio.h>

/**
 * main - print alphabet letters in reverse
 * Description: reverse the letters and printout
 * Return: Always 0 (success)
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
