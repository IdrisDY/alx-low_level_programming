#include "main.h"

/**
 *print_alphabet_x10 - prints 10xs the alphabet
 *
 * Return: this one returns void
 */

void print_alphabet_x10(void)
{
	int no = 0;
	char d = 'a';

	while (no < 10)
	{
		d = 'a';
		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');

		no++;
	}
}
