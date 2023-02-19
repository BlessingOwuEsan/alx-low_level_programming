#include <stdio.h

/**
 * main - Entry program point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/* loop through three digit number */

	int x, y, z;

	/*loop the first digit */

	for (x = 0 ; x <= 7 ; x++)
	{
		/* loop the second digit */
		for (y = x + 1 ; y <= 8 ; y++)
		{
			/* loop the third digit */
			for (z = y + 1 ; z <= 9 ; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
		/* continue adding comma, and space */
		if (x == 7 && y == 8 && z == 9)
			continue;
		putchar(',');
		putchar(' ');
					}
