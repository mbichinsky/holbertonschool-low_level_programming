#include <stdio.h>

/**
 * main- prints 00-99
 * Description: prints all number combinations with
 * commas and spaces
 * Return: Returns 0 if no issue
 */

int main(void)
{
	int i = 48;
	int j = 48;


	for (i = 48 ; i < 58 ; i++)
		for (j = 48 ; j < 58 ; j++)
		{
			putchar(i);
			putchar(j);

			if (i + j < 114)
			{
				putchar(44);
				putchar(32);
			}
		}
	putchar('\n');
	return (0);
}
