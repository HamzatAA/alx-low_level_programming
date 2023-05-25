#include "main.h"

/**
 * main - checks for a digit
 * @c: char to check
 * Return: 1 if success
*/

int _isdigit(int c)

{
	if ((c >= 48) && (c >= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
