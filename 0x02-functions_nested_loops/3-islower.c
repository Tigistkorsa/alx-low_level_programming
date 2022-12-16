#include "main.h"
/**
 * _islower -check if a chracter is uppercase or lower case
 *@c:the charcter
 * Return: 1 if letter is lowercase .o if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z'')
		return (1);
	else
		return (0);
}
