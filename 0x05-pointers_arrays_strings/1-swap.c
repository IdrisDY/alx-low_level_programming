#include "main.h"
/**
 * swap_int: function to swap two integers
 *@a: pointer to the first number
 @b : pointer to the second number
 *
 */
void swap_int(int *a, int *b)
{
	int num;
	 num = *a;
	*a = *b;
	*b = num;

}
