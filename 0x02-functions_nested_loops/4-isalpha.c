#include "main.h"
/**
* _isalpha - cheeck if the character is lower or uppercase or others.
*@c: integer argument.
*
* Return: 1 if charactere is lowercase or uppercase 0 otherwise
*/

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
