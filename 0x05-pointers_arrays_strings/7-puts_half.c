#include "main.h"

/**
 * puts_half- prints half of a string
 * if odd len, n = (length_of_the_string -1)/2
 * @str: input
 * Return: 1/2 input
 */

void puts_half(char *str)
{
	int a, n, text;

	text = 0;
	for (a = 0; str[a] != '\0'; a++)
		text++;
	n = (text / 2);
	if ((text % 2) == 1)
	{
		n = ((text + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n')
}
