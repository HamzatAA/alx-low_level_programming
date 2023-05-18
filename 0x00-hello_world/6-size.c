#include <stdio.h>
int main()
{
	int i;
	char c;
	float f;
	long int b;
	long long int r;

	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s).\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu btye(s).\n", (unsigned long)sizeof(r));
	printf("Size of a float: %lu byte(s).\n",(unsigned long)sizeof(f));

	return(0);
}
