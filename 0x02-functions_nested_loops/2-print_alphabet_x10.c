#include "main.h"
/**

*/
void print_alphabet_x10(void)
{

for (int no = 1 ;no <= 10;no++;){
	
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
	
}
