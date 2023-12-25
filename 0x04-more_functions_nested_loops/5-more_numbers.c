#include "main.h"
#include <stdio.h>
/**
*more_numbers - printing the number from 0 to 14
*
*Return: is a void function, just for printing.
*/

void more_numbers(void)
{
	int c = 48;
	int i = 0;
	int sup9 = 2;
	int garden = 0;

	for (; i <= 10; i++)
	{
		for (sup9 = 0; sup9 < 2; sup9++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (!(sup9 == 1 && c > 52))
				{
					_putchar(c);
				}
				else
				{
					garden = 1;
					break;
				}
				if (sup9 == 1 || c == 57)
				{
					if (c == 52)
					{
						break;
					}
					_putchar(49);
				}
			}
			if (garden == 1)
				break;
		}
		_putchar('\n');
		if (garden == 1)
			break;
	}
}
