#include <stdio.h>
/**
 * main - Entry program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
