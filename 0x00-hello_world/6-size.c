/* Prints size of various types on the computer */

#include <stdio.h>

/**
 *main - program starts here
 *Return: print size of various types; otherwise 0
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int:%lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
