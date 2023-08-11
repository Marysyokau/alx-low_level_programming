#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* main - Copies the content of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}int source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

int dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(source_fd);
exit(99);
}

char buffer[1024];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(source_fd);
close(dest_fd);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(source_fd);
close(dest_fd);
exit(98);
}

if (close(source_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
exit(100);
}

if (close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}

return 0;
}
