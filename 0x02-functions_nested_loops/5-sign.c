#include "main.h"
/**
 * print_sign - checking the sign of the character
 * @n: the character needed to be sign checked
 * Return: 1 & (+) if n is positive
 * OR: 0 & (0) if n is zero
 * and: -1 & (-) if n is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
