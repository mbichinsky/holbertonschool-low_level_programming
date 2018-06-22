#include <stdio.h>

/**
 * main- prints all single digit numbers
 * Description: prints all single digit numbers
 * separated by a , with a space
 * Return: Returns 0 if no issue
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
