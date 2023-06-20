#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number needed to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int  result = n % 10;
if (n < 0)
{
result = (n % 10) * -1;
}
_putchar(result + '0');
return (result);
}
