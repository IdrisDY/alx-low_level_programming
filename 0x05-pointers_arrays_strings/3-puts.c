#include <stdio.h>
#include "main.h"
/**
 *_puts - function to print a string to
 * stdout
 * @str: string parameter
 */
void _puts(char *str)
{
	
	fputs(str, stdout);
	fputs("\n", stdout);
}
