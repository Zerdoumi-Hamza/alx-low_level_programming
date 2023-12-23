#include "main.h"

/**
* print_last_digit - a function prints the last digit of a number.
*@n: number
*Return: the laste digit.
*/

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x = -x;
	switch (x)
	{
		case 0:
			_putchar(48);
		case 1:
			_putchar(49);
		case 2:
			_putchar(50);
		case 3:
			_putchar(51);
		case 4:
			_putchar(52);
		case 5:
			_putchar(53);
		case 6:
			_putchar(54);
		case 7:
			_putchar(55);
		case 8:
			_putchar(56);
		case 9:
			_putchar(57);
		default:
			_putchar(122);
	}
	return (x);
}
