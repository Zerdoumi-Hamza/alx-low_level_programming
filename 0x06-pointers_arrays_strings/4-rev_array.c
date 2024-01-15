#include "main.h"
#include <stdio.h>
/**
*reverse_array - function print the array from /
* the last element to the first one.
*@a: array.
*@n: size of array.
*Return: It's a void function so it doesn't return anything.
*/

void reverse_array(int *a, int n)
{
	int nn, i, k;

	nn = n - 1, i = 0;
	while (nn - 2 * i > 1)
	{
		k = a[i];
		a[i] = a[nn - i];
		a[nn - i] = k;
		i++;
	}
}
