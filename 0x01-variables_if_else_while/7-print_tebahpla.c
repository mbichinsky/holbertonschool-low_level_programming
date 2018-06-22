#include <stdio.h>

/**
 * main- print reverse alphabet
 * Description: prints the reverse alphabet
 * Return: Returns 0 if no issue
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
