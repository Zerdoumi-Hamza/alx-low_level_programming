#include "main.h"
/**
* print_line - function print stright line.
*@n: the number of time '_' will be repeated.
*
*Return: don't return anything just print.
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			break;	
		_putchar(95);
	}
	_putchar('\n');
}
