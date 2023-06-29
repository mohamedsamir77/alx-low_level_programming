#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destinated string
 * @src: apended string
 * @n: number of bytes to be concatenated
 * Return: the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
