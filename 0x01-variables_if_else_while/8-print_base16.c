#include <stdio.h>

/**
 * main- prints all numbers of base 16
 * Description: prints all numbers of base 16
 * in lowercase with newline
 * Return: Returns 0 if no issue
 */

int main(void)
{

	char ch;

	for (ch = '1' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
