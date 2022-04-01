#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char lower;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
}
for (lower = 'a'; lower <= 'f'; lower++)
{
putchar (lower);
}
putchar ('\n');
return (0);
}
