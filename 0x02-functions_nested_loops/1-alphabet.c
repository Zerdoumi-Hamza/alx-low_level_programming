#include "main.h"

/**
*print_alphabet - ENtry point
*
*Return: D'ont return anything just print function.
*/

void  print_alphabet(void)
{
	int c = 97;

	while ((c >= 97) && (c <= 122))
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
