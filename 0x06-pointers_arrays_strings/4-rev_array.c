#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: No return
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
