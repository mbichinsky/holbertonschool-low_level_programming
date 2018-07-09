#include "holberton.h"

/**
 * rot13 - converts string into rot13
 *
 * @s: string to be converted
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char orig[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == orig[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
