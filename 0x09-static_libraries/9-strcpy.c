#include "main.h"
#include <string.h>
/**
* _strcpy - prints a string
* @dest: input string
* @src: input character string
* Description: this prints prints strings
* Return: returns nothing
*/

char *_strcpy(char *dest, char *src)
{

int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}


