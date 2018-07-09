#include "holberton.h"

/**
 * cap_string - capitolizes each word in a string
 *
 * @s: string to be checked
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
