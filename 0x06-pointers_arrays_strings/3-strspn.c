#include "holberton.h"
#include "_strlen.c"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be searched
 *
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != _strlen(s); j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			return (count);
		}
	}
	return (count);
}
