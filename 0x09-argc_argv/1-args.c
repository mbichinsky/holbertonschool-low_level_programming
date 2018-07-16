#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: arg count
 *
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
