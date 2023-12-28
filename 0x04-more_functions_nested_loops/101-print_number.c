#include "main.h"
/**
*print_number - function to print an integer.
*@n: number to print.
*Returun:  Don't return anything.
*/
void print_number(int n)
{
	int positive;

	if (n >= 0)
	{
		positive = 1;
	}
	else
	{
		positive = 0;
		n = -n;
	}
	if (n >= 1000 && n < 10000)
	{
		if (positive == 0)
			_putchar(45);
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 1000) % 100) / 10 + '0');
		_putchar(((n % 1000) % 100) % 10 + '0');
	}
	else if (n < 1000 && n >= 100)
	{
		if (positive == 0)
		_putchar(45);
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n < 100 && n >= 10)
	{
		if (positive == 0)
			_putchar(45);
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		if (positive == 0)
			_putchar(45);
		_putchar(n + '0');
	}
	_putchar('\n');
}
