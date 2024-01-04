#include "main.h"

/**
*_strlen - Function that return the lenght of a string.
*@s: string
*
*Return: length of string.
*/
int _strlen(char *s)
{
	int i=0;

	while(s[i])
	{
		i++;
	}
	return (i - 1);
}

/**
*rev_string - Function reverses a string.
*
*@s: The string
*Return: Nothing
*/


void rev_string(char *s)
{
	int i, lengh;
	char V;
	
	i = 0;
	lengh = _strlen(s);

	while (lengh)
	{
		V = s[i];
		s[i] = s[lengh];
		s[lengh] = V;
		i++;
		lengh--;
	}
}
