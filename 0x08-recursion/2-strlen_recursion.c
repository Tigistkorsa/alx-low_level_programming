#include "main.h"

/**
* _strlen_recursion -FUNCTION RECURSIVE RETURNS LENGTH
* @s: character string
* Return: returns LENGTH OF STRING S
* wrote by: tg
*/

int _strlen_recursion(char *s)
{
if (*s  == '\0')
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}


