#include "main.h"

/**
 * check_arguments - Checks if the correct number of arguments is passed.
 * @argc: The number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 */
void check_arguments(int argc, char *argv[])
{
    if (argc != 3)
    {
        write(2, "Usage: cp file_from file_to\n", 26);
        exit(97);
    }
}

/**
 * copy_file - Copies content from the source file to the destination file.
 * @src_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 */
void copy_file(int src_fd, int dest_fd)
{
    char buffer[1024];
    ssize_t read_bytes, write_bytes;

    while ((read_bytes = read(src_fd, buffer, sizeof(buffer))) > 0)
    {
        write_bytes = write(dest_fd, buffer, read_bytes);
        if (write_bytes != read_bytes)
        {
            write(2, "Error: Can't write to file\n", 26);
            exit(99);
        }
    }
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 * Return: 0 on success, error code on failure.
 */
int main(int argc, char *argv[])
{
    int src_fd, dest_fd;

    check_arguments(argc, argv);

    /* Open source file */
    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1)
    {
        write(2, "Error: Can't read from file ", 27);
        write(2, argv[1], 27);
        write(2, "\n", 1);
        exit(98);
    }

    /* Open destination file */
    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (dest_fd == -1)
    {
        write(2, "Error: Can't write to file ", 26);
        write(2, argv[2], 27);
        write(2, "\n", 1);
        exit(99);
    }

    /* Copy content */
    copy_file(src_fd, dest_fd);

    /* Close the file descriptors */
    if (close(src_fd) == -1)
    {
        write(2, "Error: Can't close fd ", 23);
        write(2, argv[1], 27);
        write(2, "\n", 1);
        exit(100);
    }

    if (close(dest_fd) == -1)
    {
        write(2, "Error: Can't close fd ", 23);
        write(2, argv[2], 27);
        write(2, "\n", 1);
        exit(100);
    }

    return (0);
}
