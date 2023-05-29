#include "main.h"

/**
 * print_rev- prints a string, in reverse,
 * followed by a new line
 * @s: string
*/

void print_rev(char *s)
{
	int longtext;
	int o;

	longtext = 0;

	while (*s != '\0')
	{
	longtext++;
	s++;
	}
	for (o = longtext; o > 0; o--)
	{
	_putchar(*s);
	}
	_putchar('\n')
}
