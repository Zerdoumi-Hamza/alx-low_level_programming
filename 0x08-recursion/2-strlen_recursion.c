#inculde "main.h"

/**
*_strlen_recursion - function that return the size of string
*@s: parameter containe the string
*Return: lengh of the string.
*/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
