#include "main.h"
/**
* _isdigit - cheeck if the character is digit or not
*@c: character to be cheeck it.
* Return: 1 if charactere is a digit  0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
