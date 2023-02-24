#include <stdio.h>

/**
* main - Almighty Fizzbuzz, prints numbers from 1 to 100,
*
* Return: Always 0 Sucess
*/
int main(void)
{
int number;

for (number = 1; number <= 100; number++)
{
if (number % 3 == 0 && number % 5 == 0)
{
printf("FizzBuzz");
}
else if (number % 5 == 0)
{
printf("Buzz");
}
else if (number % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", number);
}
if (number != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
