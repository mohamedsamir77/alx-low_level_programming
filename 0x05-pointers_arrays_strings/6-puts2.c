#include "main.h"
/**
 * puts2 - function that print every other character starting with the first
 * @str: string to be printed only odd order position
 * Return: no return
 */
void puts2(char *str)
{
	int len = 0;
	int x = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	x = len - 1;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

