#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- figure out if n is positive or negative
 * Description: prints if n is positive or negative
 * Return: Returns 0 if no issue
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else if (n < 0)
		printf("%d is negative \n", n);
	return (0);
}
