#include <stdio.h>
/**
 *main -  prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
	int A = '0';

	int B = '0';

	int C = '0';

	for (C = '0'; C <= '9'; C++)
	{
		for (B = '0'; B <= '9'; B++)
		{
			for (A = '0'; A <= '9'; A++)
			{

				if (!((A == B) || (B == C) || (B > A) || (C > B)))
				{
					putchar(C);
					putchar(B);
					putchar(A);

					if (!(A == '9' && C == '7' && B == '8')) /*adds commas and spaces*/
					{
						putchar(',');
						putchar(' ');

					}
				}

			}

		}

	}

		putchar('\n');
		return (0);
}
