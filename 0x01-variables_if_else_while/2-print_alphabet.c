#include <stdio.h>

/**
 * main- print the alphabet
 * Description: prints the alphabet in
 * lowercase with a new line using putchar
 * Return: Returns 0 if no issue
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
