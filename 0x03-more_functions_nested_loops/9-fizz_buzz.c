#include <stdio.h>

/**
 * main - prints the num from 1 to 100
 * mult of 3 = Fizz, mult 5 = Buzz. mult of 3 and 5 = FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; n++)
	{
		if (n > 1)
			printf(" ");
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
	}
	printf("\n");
	return (0);
}
