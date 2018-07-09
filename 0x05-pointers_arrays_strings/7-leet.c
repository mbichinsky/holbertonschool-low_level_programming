#include "holberton.h"

/**
 * leet - converts specific letters into numbers
 *
 * @s: string to be converted
 *
 * Return: string
 */

char *leet(char *s)
{
	int i, j;
	char orig[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == orig[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}
