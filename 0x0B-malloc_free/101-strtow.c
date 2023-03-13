#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in str
 */
int count_words(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (*str != ' ')
{
if (!in_word)
{
in_word = 1;
count++;
}
}
else
in_word = 0;

str++;
}

return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words) or NULL
 */
char **strtow(char *str)
{
char **words;
int i, j, k, n;

if (str == NULL || *str == '\0')
return (NULL);

words = malloc(sizeof(char *) * (count_words(str) + 1));
if (words == NULL)
return (NULL);

for (i = 0, k = 0; str[i]; i++)
{
if (str[i] != ' ')
{
for (j = i, n = 0; str[j] && str[j] != ' '; j++)
n++;

words[k] = malloc(sizeof(char) * (n + 1));
if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}

for (j = i, n = 0; str[j] && str[j] != ' '; j++, n++)
words[k][n] = str[j];
words[k][n] = '\0';

k++;
i = j;
}
}

words[k] = NULL; /* Add a NULL terminator to the words array */

return (words);
}
