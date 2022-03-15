#include "main.h"
/**
*Print alphabets in lowercase 10 times
*/

void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	}

}

