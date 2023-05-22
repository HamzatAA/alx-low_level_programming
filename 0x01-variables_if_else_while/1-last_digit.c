#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random
 * number to the variable n each time it is executed
 * Return: 0 if success
*/
int main(void)
{
	int n, tail;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tail = n % 10;

	printf("Last digit of %d is %d ", n, tail);
	{
		if (n > 5)
			printf("and is greater than 5");
		else if (n = 0)
		printf("and is 0");
		else if (n < 6 && n != 0)
			printf("and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
