#include "main.h"
/**
 *_strlen-  returns the length of a string
 * @s: string
 * Return: length of string
*/

int _strlen(char *s)
{
	int longtext;

	longtext = 0;
	while (*s != '\0')
	{
		longtext++;
		s++;
	}
	return (longtext);
}
