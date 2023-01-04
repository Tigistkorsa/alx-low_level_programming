#include "main.h"

/**
 * factorial - to display the factorial of a n number
 *
 * @n: the number to find the factorials 
 *
 * Return: the factorial of @n
 *
 * */

int factorial(int n)

{

	if (n < 0)

		return (-1);

	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));

}
