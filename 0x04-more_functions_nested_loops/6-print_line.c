#include "main.h"
/**
 * print_line - output a line in the terminal with the length of n
 * @n: length of the line
 * Return: no return
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
