#include "main.h"
#include <stdio.h>

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
    int i,j;
    char replacements[] = "43071";
    char targets[] = "aeotlAEOTL";

    for (i = 0; s[i] != '\0'; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (s[i] == targets[j])
            {
                s[i] = replacements[j / 2];
                break; 
            }
        }
    }

    return (s);
}
