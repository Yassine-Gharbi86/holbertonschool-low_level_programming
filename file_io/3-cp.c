#include "main.h"
#include <stdio.h>

/**
* error_file - checks if files can be opened.
* @source_fd: file descriptor of the source file.
* @dest_fd: file descriptor of the destination file.
* @argv: arguments vector.
* Return: no return.
*/
void error_file(int source_fd, int dest_fd, char *argv[])
{
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
* main - copies the content from one file to another.
* @argc: number of arguments.
* @argv: arguments vector.
* Return: 0 on success, exits with error code otherwise.
*/
int main(int argc, char *argv[])
{
int source_fd, dest_fd, close_status;
ssize_t bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
source_fd = open(argv[1], O_RDONLY);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
error_file(source_fd, dest_fd, argv);
bytes_read = 1024;
while (bytes_read == 1024)
{
bytes_read = read(source_fd, buffer, 1024);
if (bytes_read == -1)
error_file(-1, 0, argv);
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
error_file(0, -1, argv);
}
close_status = close(source_fd);
if (close_status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
exit(100);
}
close_status = close(dest_fd);
if (close_status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}
return (0);
}
