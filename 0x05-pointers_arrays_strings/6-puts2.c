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
*puts2 - function that prints every other character of a string.
*
*@str: var containing a string.
*Return: Nothing.
*/

void puts2(char *str)
{
	int lengh, i;

	lengh = _strlen(str);
	for (i = 0; i <= lengh; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
