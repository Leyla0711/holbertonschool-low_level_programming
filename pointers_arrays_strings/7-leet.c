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
    char mapping[] = "aeotlAEOTL";
    char replacements[] = "43071";

    for (i = 0; s[i] != '\0'; i++)
    {
        int j;
        for (j = 0; j < 10; j++)
        {
            // Use only one if statement to check all mappings
            if (s[i] == mapping[j])
            {
                s[i] = replacements[j / 2]; // Replace with corresponding leet character
                break; // Break once a match is found
            }
        }
    }

    return (s);
}
