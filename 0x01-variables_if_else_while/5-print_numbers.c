#include <stdio.h>

/**
 * main- print numbers of base 10
 * Description: prints all single digit numbers
 * of base 10 starting with 0
 * Return: Returns 0 if no issue
 */

int main(void)
{
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
