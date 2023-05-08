#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - prints error message and exits with given code
 * @message: error message to print
 * @code: exit code to use
 *
 * Return: void
 */
void print_error_and_exit(char *message, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 on success, otherwise error code
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
