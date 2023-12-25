#include "main.h"
/**
*print_diagonal - function print stright line.
*@n: the number of time '_' will be repeated.
*
*Return: don't return anything just print.
*/

void print_diagonal(int n)
{
	int i;
	int j;
	
	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= j; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else 
	{
		_putchar('\n');
	}
}
