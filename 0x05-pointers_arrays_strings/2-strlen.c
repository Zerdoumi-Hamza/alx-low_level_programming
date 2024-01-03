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
