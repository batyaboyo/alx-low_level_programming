#include "main.h"

/**
 * string_toupper - c.
 *
 * @s: is a pointer to a char.
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	i++;
	}
return (s);
}
