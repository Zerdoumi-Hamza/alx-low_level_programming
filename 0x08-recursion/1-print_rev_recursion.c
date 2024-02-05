#include "main.h"

/**
* _print_rev_recursion -  Recursive function that print the string.
*@s: the string suposed to sent to the function.
*Return: Nothing.
*/

void _print_rev_recursion(char *s)
{
	/*  Base condition*/
	if  (s[0] != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(s[0]);
	}
	else
	{
		_putchar('\n');
	}
}
