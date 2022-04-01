#include "main.h"

/**
 * rot13 - Change a string to  ROT format.
 *
 * @s: is a pointer to a char.
 *
 * Return: Always 0.
 */

char *rot13(char *s)
{
char input[1000] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[1000] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0, j;
while (s[i] != '\0')
{
for (j = 0; j <= 52; j++)
{
if (s[i] == input[j])
{
s[i] = output[j];
break;
}
}
i++;
}
return (s);
}
