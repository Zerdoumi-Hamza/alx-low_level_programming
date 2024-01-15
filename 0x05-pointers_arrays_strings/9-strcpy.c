#include "main.h"
/**
**_strcpy - a function that copies the string
*@dest: first argument.
*@src: second argument.
*Return:The pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (*src)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
