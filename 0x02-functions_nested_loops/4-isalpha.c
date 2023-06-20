#include "main.h"
/**
 * _isalpha - check if the character is alphabet
 * @c: character to be checked
 * Return: 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
