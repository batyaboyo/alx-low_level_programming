#include "main.h"

/**
 * _print_rev_recursion - is a function that prints a string in reverse.
 *
 * @s: is a pointer to a char array
 *
 * Return: Return the transformed pointer
 *
**/

void _print_rev_recursion(char *s)
{
if (*s == 0)
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
