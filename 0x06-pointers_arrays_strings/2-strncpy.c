#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destinated string
 * @src: copied string
 * @n: number of bytes to be copied
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

