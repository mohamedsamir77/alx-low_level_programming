#include "main.h"
/**
 * _isupper - checking if the character is uppercase
 * @c: the character need to be checked
 * Return: 1 if c is uppercase and 0 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
