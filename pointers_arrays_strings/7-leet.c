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
    char replacement;

    for (i = 0; s[i] != '\0'; i++)
    {
        replacement = s[i]; // Default to current character

        if (s[i] == 'a' || s[i] == 'A')
            replacement = '4';
        else if (s[i] == 'e' || s[i] == 'E')
            replacement = '3';
        else if (s[i] == 'o' || s[i] == 'O')
            replacement = '0';
        else if (s[i] == 't' || s[i] == 'T')
            replacement = '7';
        else if (s[i] == 'l' || s[i] == 'L')
            replacement = '1';

        s[i] = replacement; // Assign the replacement character
    }

    return (s);
}
