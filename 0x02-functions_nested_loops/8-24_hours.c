#include "main.h"
#include <stdbool.h>
/**
* jack_bauer - a function that prints every
* minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*Return: The main purpose of this function is to display
*/
void jack_bauer(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;
	bool a = false;
	while (i <= 50)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 53)
			{
				l = 48;
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if ((i == 50) && (j == 51))
					{
					if ((k == 53) && (l == 57))
					{
						a = true;
						break;
					}
					}
					l++;
				}
				if (a)
					break;	
				k++;
			}
			if (a)
				break;
			j++;
		}
		if (a)
			break;
		i++;
	}
}
