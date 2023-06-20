#include "main.h"
/**
 * print_alphabet_x10 - print alower case alphabets 10 times
 */
void print_alphabet_x10(void)
{
int repeat = 0;
char ch;
while (repeat < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
repeat++;
}
}
