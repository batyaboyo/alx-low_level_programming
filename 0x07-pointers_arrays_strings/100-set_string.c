#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: a pointer to a pointer to a char.
 * @to: is a pointer to a char.
 *
 * Return: Returns nothing.
**/

void set_string(char **s, char *to)
{
*s = to;
}
