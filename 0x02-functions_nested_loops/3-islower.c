#include "main.h"
/**
* _islower - cheeck if the character is lower or not
* Return: 1 if charactere is lowercase 0 otherwise
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
