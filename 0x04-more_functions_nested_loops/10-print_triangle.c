#include "main.h"
/**
 * print_triangle - output a triangle of #
 * @size: size of the triangle base
 * * Return: no return
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 1;

		while (i <= size)
		{
			int j = i, k = 1;

			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
