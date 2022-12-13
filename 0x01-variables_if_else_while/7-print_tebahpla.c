#include <stdio.h>

/**
 * main -print the alphbets in reverse
 * Return:always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
