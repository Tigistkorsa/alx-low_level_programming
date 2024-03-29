#include "main.h"
#include <stdlib.h>

/**
* _strlen - returns length of string
* @str: input character array
* Return: returns size of string
*/
int _strlen(char *str)
{
int len = 0;
while (*(str + len) != '\0')
{
len++;
}
return (len);
}
/**
* _strdup - returns pointer array
* @str: input character array
* Return: returns pointer
*/
char *_strdup(char *str)
{
char *cpy;
unsigned int i, len;

if (str == NULL)
return (NULL);

len = _strlen(str) + 1;
cpy = malloc(len);

if (cpy == NULL)
return (NULL);

for (i = 0; i < len; i++)
cpy[i] = str[i];
cpy[i] = '\0';

return (cpy);
}


