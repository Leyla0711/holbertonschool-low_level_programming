#include "main.h"

int sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return (guess);
    if (guess * guess > n)
        return (-1);
    return (sqrt_helper(n, guess + 1));
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (sqrt_helper(n, 1));
}
