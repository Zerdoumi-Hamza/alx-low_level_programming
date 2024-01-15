#include <stdio.h>

/**
* _strncat - function concate string with a controlable number of biyt
*@dest: first param
*@src: seconde param
*@n: nmber of byte you want to concat from the second string
*Return: pointer containe the result of cancatenation.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, a = 0;
	char *p = " ";

	while (dest[i] != '\0')
	{
		i++;
		if (dest[i] == *p)
			a = 1;
	}
	if (!a)
	{
		dest[i] = *p;
		i++;
	}
	while (src[j] != '\0')
	{
		if (j >= n)
			break;
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
