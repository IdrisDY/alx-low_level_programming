#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int a;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10
if (a > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (a == 0)
printf("Last digit of %i is %i and is 0\n", n, m);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);

return (0);
}
