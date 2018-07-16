#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * main - program that prints all arguments it receives
 *
 * @argc: arg count
 *
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
