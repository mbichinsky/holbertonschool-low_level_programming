#include "holberton.h"
#include "_strlen.c"

/**
 * _strcmp - compares the length of two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if equal, else returns difference of the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
