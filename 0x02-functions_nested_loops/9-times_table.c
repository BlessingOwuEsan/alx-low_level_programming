#include "main.h"

/**
 * times_table - Prints 9 times table starting from 0
 *
 * Return: void
 */

void times_table(void)
{
int i, j;
int mul;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)

{
mul = (i * j);
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if ((mul < 10) && (j != 0))
{
_putchar(' ');
_putchar((mul % 10) + '0');
}
else if (mul >= 10)
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
else
_putchar((mul % 10) + '0');
}
_putchar('\n');
}

}
