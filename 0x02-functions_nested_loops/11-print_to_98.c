#include "main.h"
#include <stdio.h>

/**
*print_to_98 - function print to 98
*@n: start number.
*
*Return: it doesn't rerturn any thing, but it print.
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 98)
		{
			printf("%d, ",n);
			n--;
		}
		else
		{
			printf("%d, ",n);
			n++;
		}
	}
	if (n == 98)
		printf("%d\n",n);
	else
		printf("%d\n",n);
}
