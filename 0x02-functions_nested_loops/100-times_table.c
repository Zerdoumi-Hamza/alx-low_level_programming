#include "main.h"
#include <stdio.h>
/**
* print_times_table - a function print the times table
*@n: number you want to print thier table_times
* Return:  Nothing
*/

void print_times_table(int n)
{
	int i = 0;

	if ((n > 0) || (n < 15))
	{
		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int m = (i * j) % 10;
				int d = (i * j) / 10;

				if (i * j > 9)
				{
					_putchar(d + '0');
					_putchar(m + '0');
					if (j < n)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
				}
				else
				{
					_putchar(m + '0');
					if (j < n)
					{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
