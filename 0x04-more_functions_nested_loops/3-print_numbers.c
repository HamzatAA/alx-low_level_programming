#include "main.h"

/**
 * main - prints the numbers
 *
 * Return 0 if success
*/

void print_numbers(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar (c);
	}
	_putchar('\n');
}
