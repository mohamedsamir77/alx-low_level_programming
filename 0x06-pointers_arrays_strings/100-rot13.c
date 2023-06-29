#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode a string using rot13
 * @s: the string need to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded_x[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = encoded_x[j];
				break;
			}
		}
	}
	return (s);
}

