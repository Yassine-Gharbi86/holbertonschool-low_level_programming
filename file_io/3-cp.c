#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
* check_arguments - check if the correct number of arguments is passed
* @argc: argument count
*/
void check_arguments(int argc)
{
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
}
/**
* open_file - open a file and return the file descriptor
* @filename: name of the file to open
* @flags: the flags for open() (e.g., O_RDONLY, O_WRONLY)
* @mode: the mode to set when creating a file (if applicable)
* @is_input: flag to check if it's input (read) or output (write)
*
* Return: file descriptor on success, -1 on failure
*/
int open_file(const char *filename, int flags, mode_t mode, int is_input)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
if (is_input)
dprintf(2, "Error: Can't read from file %s\n", filename);
else
dprintf(2, "Error: Can't write to %s\n", filename);
exit(is_input ? 98 : 99);
}
return (fd);
}
/**
* copy_content - copy content from one file to another
* @file_from: file descriptor for the source file
* @file_to: file descriptor for the destination file
*/
void copy_content(int file_from, int file_to)
{
ssize_t nread, nwrite;
char buffer[BUFFER_SIZE];
while ((nread = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
nwrite = write(file_to, buffer, nread);
if (nwrite == -1)
{
dprintf(2, "Error: Can't write to %s\n", "file_to");
exit(99);
}
}
if (nread == -1)
{
dprintf(2, "Error: Can't read from file %s\n", "file_from");
exit(98);
}
}
/**
* close_file - close a file and handle errors
* @fd: file descriptor to close
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* main - copies the content of one file to another
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 on success, appropriate exit code on failure
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
check_arguments(argc);
file_from = open_file(argv[1], O_RDONLY, 0, 1);
file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664, 0);
copy_content(file_from, file_to);
close_file(file_from);
close_file(file_to);
return (0);
}
