#include <stdio.h>

/**
*string_toupper - function to chnage a string to uppercase
*@s: string
*Return: modified string.
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			s[i] = (char)((int)s[i] - 32);
		}
		i++;
	}
	return (s);
}
