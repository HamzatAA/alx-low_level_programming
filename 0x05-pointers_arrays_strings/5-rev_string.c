#include "main.h"

/**
 * rev_string- reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int letters = 0;
	int i;

	while (s[letters] != '\10')
		letters++
	for (i = 0; i < letter; i++)
	{
		letter--;
		rev = s[i];
		s[i] = s[letter];
		s[letter] = rev;
	}
}
