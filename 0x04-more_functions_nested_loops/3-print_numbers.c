#include "main.h"
/**
 * print_numbers - output the numbers from 0 to 9 on the console
 *
 * Return: no return
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
