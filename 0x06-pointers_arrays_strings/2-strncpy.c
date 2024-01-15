#include <stdio.h>
#include "main.h"
/**
*_strncpy - Function that copies a string.
*@dest: destination parameter
*@src: source of string
*@n: the number of byt want to copy
*Return: the copies string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
