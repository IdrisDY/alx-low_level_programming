#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main-main block contains code */
/* Description : print last number in random */
/* betty style doc for function main goes there */
int main(void)
{
	int a;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
if (a > 5)
<<<<<<< HEAD
printf("Last digit of %i is %i and is greater than 5\n",n, a);
else if (a == 0)
printf("Last digit of %i is %i and is 0\n", n, a);
else
printf("Last digit of %i is %i and is greater than 5\n", n, a);
else if (a == 0)
printf("Last digit of %i is %i and is 0\n", n, a);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);

return (0);
}
