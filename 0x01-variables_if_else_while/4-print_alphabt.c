#include <stdio.h>

/**
 * main- print the alphabet with exceptions
 * Description: prints the alphabet except e and q in
 * lowercase with a new line using putchar
 * Return: Returns 0 if no issue
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
