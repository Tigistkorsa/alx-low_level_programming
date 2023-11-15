#include "main.h"
#include <stdio.h>
/**
* _strrlen - returns length of string
* @str: input character array
* Return: returns size of string
* Author: mgemoraw
*/
int _strrlen(char *str)
{
if (str == NULL)
return (0);
if (*str++ != '\0')
return (1 + _strrlen((char *)(str++)));
}
/**
* wildcmp - compares two strngs
* @s1: character array
* @s2: character array
* Return: returns 1 if s1 == s2
* wroteby :tg
*/

int wildcmp(char *s1, char *s2)
{
int i = 0, len = _strrlen(s2);
if (s1 == NULL || s2 == NULL)
return (0);

if (*s1 != '\0')
{
    if (*s2++ == '*')
    return (1);
    else if (*s1++ == *s2++)
    {
        wildcmp((char *) (s1++), (char *) (s2++));
    }
    printf("len = %d, i = %d \n", len, i);
    // if (len + 1 == i)
    return (1);
}


return (0);

}


