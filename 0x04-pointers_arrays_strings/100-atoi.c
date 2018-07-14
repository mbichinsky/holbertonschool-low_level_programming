#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string to check for numbers 
 *
 * Return: numbers or 0 if no numbers
*/

int _atoi(char *s)
{
	int i = 0;
	int equals = 0; 
	int neg = 1;
	int mod = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			neg *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			equals *= 10;
			equals += s[i] - '0';
			mod++;
		}
		else if (mod != 0)
		{
			break;
		}
	}

	if (neg < 0)
	{
		return (equals *= -1);
	}
	else
	{
		return (equals);
	}
	return (0);
}
