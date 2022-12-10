#include <stdio.h>
/**
 * main -print out size of diffrent data type in c
 *
 * return: it retun 0(sucess)i
 */
int main(void)
{
	printf("size of a char: %lu byte(S)\n", sizeof(char));
	printf("size of a int: %lu byte(S)\n",  sizeof(int));
	printf("size of a long int: %lu byte(S)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(S)\n", sizeof(long long int));	printf("size of a float: %lu byte(S)\n", sizeof(float));
	return (0);
}
