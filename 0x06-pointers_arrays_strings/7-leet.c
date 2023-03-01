#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
int i, j;
char leet[] = "aAeEoOtTlL";
char leet_replace[] = "4433007711";

for (i = 0; s[i]; i++)
{
for (j = 0; leet[j]; j++)
{
if (s[i] == leet[j])
{
s[i] = leet_replace[j];
break;
}
}
}
return (s);
}
