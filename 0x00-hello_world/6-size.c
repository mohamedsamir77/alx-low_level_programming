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
float f_var;

printf("Size of a char: %li byte(s)\n", sizeof(char_var));
printf("Size of an int: %li byte(s)\n", sizeof(int_var));
printf("Size of a long int: %li byte(s)\n", sizeof(l_int_var));
printf("Size of a long long int: %li byte(s)\n", sizeof(ll_int_var));
printf("Size of a float: %li byte(s)\n", sizeof(f_var));
return (0);
}
