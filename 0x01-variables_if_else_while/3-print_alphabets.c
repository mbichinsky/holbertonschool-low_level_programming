#include <stdio.h>

/**
 * main- print the alphabet twice
 * Description: prints the alphabet in
 * lowercase then in uppercase
 * with a new line using putchar
 * Return: Returns 0 if no issue
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
