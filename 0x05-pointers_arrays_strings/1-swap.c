#include "main.h"

/**
* swap_int- swaps the value of two integers
* @a: integer1
* @b: integer2
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
