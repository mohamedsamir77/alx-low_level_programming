#include "main.h"

/**
 * string_toupper - change lowercase in a string to uppercase
 * @n: string to be uppercased
 * Return: uppercased string
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

