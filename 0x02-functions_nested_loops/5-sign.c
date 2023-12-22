#include "main.h"

/**
* print_sign - a function that prints the sign of a number
*@n: the number need to cheeck it.
*
*Return: 1 if > 0 0 if 0 and -1 if < 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
