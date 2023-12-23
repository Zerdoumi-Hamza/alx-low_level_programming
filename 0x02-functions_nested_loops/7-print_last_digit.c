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
			break;
		case 1:
			_putchar(49);
			break;
		case 2:
			_putchar(50);
			break;
		case 3:
			_putchar(51);
			break;
		case 4:
			_putchar(52);
			break;
		case 5:
			_putchar(53);
			break;
		case 6:
			_putchar(54);
			break;
		case 7:
			_putchar(55);
			break;
		case 8:
			_putchar(56);
			break;
		case 9:
			_putchar(57);
			break;
		default:
			_putchar(122);
			break;
	}
	return (x);
}
