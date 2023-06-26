#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: string to be half printed
 * Return: half of string
 */
void puts_half(char *str)
{
	int i, x, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	x = (len / 2);

	if ((len % 2) == 1)
		x = ((len + 1) / 2);

	for (i = x; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

