#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Function prototypes */
int _putchar(char c);
void copy_file(int src_fd, int dest_fd);
void check_arguments(int argc, char *argv[]);

#endif /* MAIN_H */
