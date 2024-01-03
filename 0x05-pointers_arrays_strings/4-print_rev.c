#include "main.h"

/**
* _strlen - function calculate the lengh of string.
*@s: The string provided.
*Return: the lengh of function.
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i - 1);
}

/**
*print_rev - print a string in reverse order.
*
*@s: string need to revert.
*Return: Nothing
*/

void print_rev(char *s)
{
	int lengh;

	lengh = _strlen(s);
	while (s[lengh])
	{
		_putchar(s[lengh]);
		lengh--;
	}
	_putchar('\n');
}
