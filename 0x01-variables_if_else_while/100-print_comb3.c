#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number1, number2;
for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 0; number2 < 10; number2++)
{
if (number1 == number2 || number1 > number2)
continue;
else
putchar ((number1 % 10) + '0');
putchar ((number2 % 10) + '0');
if (number1 == 8 && number2 == 9)
{
}
else
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
