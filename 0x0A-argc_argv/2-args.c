#include <stdio.h>

/**
 * main - prints all arguments passed to the program
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
