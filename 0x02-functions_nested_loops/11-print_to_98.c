#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 *
 * @n: random given number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int j;
	int i = 98;

	if (n <= i)
	{
		for (j = n; j <= i; j++)
		{
			printf("%d", j);
			if (j < i)
			{
				putchar (',');
				putchar (' ');
			}
		}
		printf("\n");
	}

	if (n >= i)
	{
		for (j = n; j >= i; j--)
		{
			printf("%d", j);
			if (j > i)
			{
				putchar (',');
				putchar (' ');
			}
		}
		printf("\n");
	}
}
