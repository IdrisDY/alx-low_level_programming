#include <stdio.h>
/**
 * main - print numbers of base16 in lowercase
 * Description: Print all numbers of base16 in lowercase.
 * return: always 0(sucess)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
