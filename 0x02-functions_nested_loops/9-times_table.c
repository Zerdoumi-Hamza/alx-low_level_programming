#include "main.h"
#include <stdio.h>
/**
* times_table - a function print the times table
* Return:  Nothing
*/

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int m = (i * j) % 10;
			int d = (i * j) / 10;

			if (i * j > 9)
			{
				_putchar(d + '0');
				_putchar(m + '0');
				if (j < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				_putchar(m + '0');
				if (j < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
