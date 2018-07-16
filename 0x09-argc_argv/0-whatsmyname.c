#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: arg count
 *
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
