#include "main.h"

/**
 * _atoi-  convert a string to an integer
 * @str: string
 * Return: int
 */

int _atoi(char *s)
{
	int i, a, b, length, c, n;

	i = 0;
	a = 0;
	b = 0;
	length = 0;
	c = 0;
	n = 0;

	while (str[length] != '\0')
	{
		length++
	}
	while (i < length && c == 0)
	{
		if (str[i] == '-')
		{
			++a;

		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = str[i] - '0';
		}
		if (d % 2)
		{
			n = -n;
		}
		b = b * 10 + n;
		c = 1;
		if (str[i + 1] < '0' || str[i + 1] > '9')
		{
			break
		}
		c = 0;
	}
	i++
		if (c == 0)
		{
			return (0);
		}
}
		}


