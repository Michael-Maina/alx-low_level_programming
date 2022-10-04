#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to s1 and s2 combined and null terminated
 *         NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2, len3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
		len1++;
	while (*s2 != '\0')
		len2++;

	len3 = len1 + len2;

	s3 = malloc(sizeof(char) * len3 + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; i <= len3;)
	{
		s3[i++] = s2[j++];
	}
	return (s3);
}
