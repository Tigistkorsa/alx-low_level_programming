#include "main.h"
/**
 *print_alphabet_x10 -printing alhabet 10 times
 *
 *
 *
 */

void print_alphabet_x10(void)
{
	int T;
	char al;

	for (T = 0; T <= 'z'; T++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
