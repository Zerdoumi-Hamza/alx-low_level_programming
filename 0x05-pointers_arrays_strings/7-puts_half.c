#include "main.h"

/**
*puts_half - Function that print the half of a string.
*@str: string parameter;
*Return: Nothing.
*/

void puts_half(char *str)
{
	int lengh, i;

	lengh = _strlen(str);
	if (lengh % 2 != 0)
	{
		for (i = (lengh - 1) / 2; i <= lengh; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = lengh / 2; i <= lengh; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
