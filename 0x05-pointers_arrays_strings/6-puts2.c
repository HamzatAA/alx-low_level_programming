#include "main.h"

/**
 * puts2-  prints every other character
 * of a string
 * @str: string
 */

void puts2(char *str)
{
	int text = 0;
	int r = 0;
	char *a = str;
	int o;

	while (*a != '\0')
	{
		a++;
		text++;
	}
	b = text - 1;
	for (o = 0; o <= b; o++)
	if (o % 2 == 0)
	{
		{
		_putchar(str[o]);
		}
	}
	_putchar('\n')
}
