#include "main.h"
/**
 *print_alphabet_x10 -printing alhabet 10 times
 *
 *
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; j <= 'z'; j++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
