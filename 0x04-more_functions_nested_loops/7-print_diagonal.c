#include "main.h"
/**
 * print_diagonal - output a diagonal followed by \ and new line
 * @n: number of times the character \ needed to build the diagonal shape
 * Return: no return
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
