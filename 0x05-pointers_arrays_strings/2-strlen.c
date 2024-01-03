#include "main.h"

/**
*_strlen - Function that return the lenght of a string.
*@s: string
*
*Return: length of string.
*/
nt _strlen(char *s)
{
        int i=0;

        while(*s)
        {
                *(s++);
                i++;
        }
        return (i);
}
