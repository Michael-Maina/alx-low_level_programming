#include "main.h"

int _strlen(char *s);
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int len;
	char *rev_str = s;

	len = _strlen(s);

	for (; i < len;)
	{
		*(rev_str + i) = *(s + (len - i));
		i++;
	}
}


/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be determined
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++) /*counts characters in string until \0. */
		a++;

	return (a);
}
