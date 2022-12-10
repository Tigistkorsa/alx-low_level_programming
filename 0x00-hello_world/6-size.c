#include <stdio.h>
/**
 * main -print out size of diffrent data type in c
 *
 * return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a);
	printf("size of a int: %lu byte(S)\n", (unsigned long)sizeof(b);
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c);
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d);
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(f);
}

