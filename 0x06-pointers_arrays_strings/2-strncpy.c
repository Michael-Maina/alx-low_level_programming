#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_dest = 0;   /* length of dest */
	int len_src = 0;    /* length of src */
	int len_tmp = 0;
	char *tmp = dest;

	while (len_src < n)
		dest[len_dest++] = src[len_src++];

	len_tmp = len_dest;

	while (tmp[len_tmp] != '\0')
	{
		dest[len_dest++] = tmp[len_tmp++];
	}

	dest[len_dest] = '\0';    /* appends null byte to dest */
	return (dest);
}
