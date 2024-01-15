#include "main.h"

/*
*_strcat - function can concatenate the string.
*@dest: First argument
*@src: Second argument
*Return: return dest which is the concate result of two string.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p = " ";

	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = *p;
	i++;
	while (src[j] != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	return (dest);
}
