#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}

