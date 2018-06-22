#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- figure out what last digit of n is
 * Description: prints last digit of n. says if greater than 5,
 * is 0 or is less than 6 and not 0
 * Return: Returns 0 if no issue
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else if
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
