#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: pointer to memory area.
 *@b: constant to fill memory with.
 *@n: bytes of the memory area to be filled.
 *Return: pointer to memory area s.
 *
 */

char *_memset(char *s, char b, unsigned int n)

{

	int no_of_line;

	for (no_of_line = 0; no_of_line < n; no_of_line++)

	{

		s[no_of_line] = b;

	}

	return (s);

}
