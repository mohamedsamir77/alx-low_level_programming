#include <stdio.h>
/**
 * main - Entry program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'Z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
