#include "main.h"
/**
*_strlen - function calculate the size of string.
*@s: string.
*Return: the size of string.
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i - 1);
}

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
