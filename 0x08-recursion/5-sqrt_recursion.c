#include "main.h"

/**
 * checker-to get the square root of two numbers
 * @a:first number
 * @b:number to test for the square root of @a
 * Return: square root
 */

int checker(int a, int b)

{

	if (b * b > a)

		return (-1);

	else if (b * b == a)

		return (b);

	else

		return (checker(a, b + 1));

	return (1);

}

int _sqrt_recursion(int n)

{

	if (n == 0)

		return (0);

	return (checker(n, 1));

}

	
