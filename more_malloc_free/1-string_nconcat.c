#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int l1, i, e;
    char *a;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    l1 = 0;
    while (s1[l1])
        l1++;

    a = malloc(sizeof(*a) * (l1 + n + 1));

    if (a == NULL)
        return (NULL);

    for (i = 0; i < l1; i++)
    {
        a[i] = s1[i];
    }

    for (e = 0; e < n && s2[e]; e++, i++)
    {
        a[i] = s2[e];
    }

    a[i] = '\0';

    return (a);
}



