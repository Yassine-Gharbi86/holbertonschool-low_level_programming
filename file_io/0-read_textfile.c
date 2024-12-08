#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file
* @letters: number of letters it should read and print
* Return: number of letters it could read and print or 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_desc;
char *buffer;
ssize_t bytes_read, bytes_written;
if (filename == NULL)
return (0);
file_desc = open(filename, O_RDONLY);
if (file_desc == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file_desc);
return (0);
}
bytes_read = read(file_desc, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(file_desc);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(file_desc);
return (0);
}
free(buffer);
close(file_desc);
return (bytes_written);
}
