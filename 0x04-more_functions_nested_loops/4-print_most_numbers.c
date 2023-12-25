#include "main.h"
/**
*print_most_numbers - printing the number from 0 to 9.
*
*Return: is a void function, just for printing.
*/

void print_most_numbers(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
