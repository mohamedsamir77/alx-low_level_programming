#include "main.h"

/**
 * infinite_add - add two numbers together
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result or 0 if result can't be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0;
    int sum = 0;
    int carry = 0;
    int n1_len = 0;
    int n2_len = 0;

    while (n1[n1_len])
        n1_len++;
    while (n2[n2_len])
        n2_len++;

    if (size_r <= n1_len || size_r <= n2_len)
        return (0);

    i = n1_len - 1;
    j = n2_len - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';
        r[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (k >= size_r)
        return (0);

    r[k] = '\0';

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char tmp = r[i];
        r[i] = r[j];
        r[j] = tmp;
    }

    return (r);
}

