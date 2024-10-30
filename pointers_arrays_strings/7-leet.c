#include "main.h"
#include <stdio.h>

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
    int i;
    char replacements[] = "43071"; // Mapped replacements for a, e, o, t, l
    char targets[] = "aeotlAEOTL"; // Corresponding target characters

    for (i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i] == targets[j])
            {
                s[i] = replacements[j / 2]; // Use j/2 to get the correct index in replacements
                break; // Break after the first match
            }
        }
    }

    return (s);
}
