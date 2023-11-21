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
* _stracpy - concatenates two strings
* @dest: destination string
* @source: source string
* Return: returns size of string
*/
void _stracpy(char *dest, char *source)
{
int i, j;
i = _strlen(dest);

for (j = 0; *(source + j) != '\0'; j++)
{
dest[i + j] = source[j];
}
return;
}

/**
* argstostr - concatenates arguments of string
* @ac: argument count
* @av: argument array
* Return: returns character array
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
