#include "main.h"
/**

*/
void print_alphabet_x10(void)
{
int no = 1;
while(no <= 10){
	no++;
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
