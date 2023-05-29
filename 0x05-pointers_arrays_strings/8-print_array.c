#include "main.h"

/**
 * print_array- prints elements of an array of integers
 * @a: array name
 * @n: element to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = o; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
