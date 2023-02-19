#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *\

int main(void)

{
 /* loop through a two digit mumbers*/

int a, b;

/* loop throgh the first digit */

for (a = 0 ; a <= 8 ; a++)
{
	/* loop throuh the second digit */

	for (b = a + 1 ; b <= 9 ; b++)
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');

		/* continue adding comma and space */

		if (a == 8 && b == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
