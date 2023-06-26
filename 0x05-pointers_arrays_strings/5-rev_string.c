#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int order = 0;
	int i;

	while (s[order] != '\0')
	order++;
	for (i = 0; i < order; i++)
	{
		order--;
		rev = s[i];
		s[i] = s[order];
		s[order] = rev;
	}
}

