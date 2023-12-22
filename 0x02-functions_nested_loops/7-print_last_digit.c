#include "main.h"

/**
* print_last_digit - a function prints the last digit of a number.
*@n: number
*Return: the laste digit.
*/

int print_last_digit(int n)
{
	int x = n % 10;
	
	if (x >= 0)
		return (x);
	else
		return (-x);
}
