#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - program that adds positive numbers.
 *
 * @argc: arg count
 *
 * @argv: arg vector
 *
 * Return: 0 if no numbers or program runs, 1 if no digits
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (strspn(argv[i], "0123456789") == strlen(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
