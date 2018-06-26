#include "holberton.h"

/**
 * main - print Holberton \n
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	char name[] = "Holberton";

	for (i = 0; i <= 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar ('\n');
	return (0);
}
