#include <stdio.h>

/**
 * main- print numbers of base 10
 * Description: prints all single digit numbers
 * of base 10 starting with 0 with putchar (uses ascii table)
 * Return: Returns 0 if no issue
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
