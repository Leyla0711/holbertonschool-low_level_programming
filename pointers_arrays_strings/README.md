File: main.h is the header file containing all the function prototypes used in this project.

File: 0-reset_to_98.c is a function that takes a pointer to an int as parameter and updates the value it points to to 98.

File: 1-swap.c is a function that swaps the values of two integers.

File: 2-strlen.c is a function that returns the length of a string.

File: 3-puts.c is a function that prints a string, followed by a new line, to stdout.

File: 4-print_rev.c is a function that prints a string, in reverse, followed by a new line.

File: 5-rev_string.c is a function that reverses a string.

File: 6-puts2.c is a function that prints one char out of 2 of a string, followed by a new line.

File: 7-puts_half.c is a function that prints half of a string, followed by a new line.

File: 8-print_array.c is a function that prints n elements of an array of integers, followed by a new line.

File: 9-strcpy.c is a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

File: 100-atoi.c is a function that convert a string to an integer.

File: 101-keygen.c is a program that generates random valid passwords for the program 101-crackme.

File: _putchar.c contains the _putchar() function definition.

ASK 0 - memset Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.
TASK 1 - memcpy Write a function that copies memory area.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.
TASK 2 - strchr Write a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.
TASK 3 - strspn Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.
TASK 4 - strpbrk Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.
TASK 5 - strstr Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.
TASK 6 - Chess is mental torture Write a function that prints the chessboard.

Prototype: void print_chessboard(char (*a)[8]);
TASK 7 - The line of life is a ragged diagonal between duty and desire Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: void print_diagsums(int *a, int size);
Format: see example
You are allowed to use the standard library
Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
TASK 8 - Double pointer, double fun Write a function that sets the value of a pointer to a char.

Prototype: void set_string(char **s, char *to);
