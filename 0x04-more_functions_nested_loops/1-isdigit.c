#include "main.h"
/**
 * _isdigit - checking if the character is a natural number
 * @c: the character need to be checked
 * Return: 1 if c is a number and 0 if c is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
