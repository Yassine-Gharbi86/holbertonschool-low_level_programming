#include "main.h"
/**
* create_file - creates a file and writes the text content to it.
* @filename: name of the file
* @text_content: text content to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file_desc;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_desc == -1)
return (-1);
if (text_content != NULL)
{
bytes_written = write(file_desc, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(file_desc);
return (-1);
}
}
close(file_desc);
return (1);
}
