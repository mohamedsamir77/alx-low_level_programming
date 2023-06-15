#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char char_var;
int int_var;
long int l_int_var;
long long int ll_int_var;
float f_int;

printf("Size of a cahr:", sizeof(char_var), "byte(s)\n");
printf("Size of an int:", sizeof(int_var), "byte(s)\n");
printf("Size of a long int:", sizeof(l_int_var), "byte(s)\n");
printf("Size of a long long int:", sizeof(ll_int_var), "byte(s)\n");
printf("Size of a float:", sizeof(f_int), "byte(s)\n");
}
