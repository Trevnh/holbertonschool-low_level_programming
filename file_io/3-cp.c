#include "main.h"
/**
 * error_msg - prints error message and exits
 * @msg: message to print
 * @file: filename causing error
 * @exit_status: exit status to use
 */
void error_msg(char *msg, char *file, int exit_status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file);
	exit(exit_status);
}
/**
 * main - copies content from file1 to file2
 * @argc: number of arguments
 * @argv: pointer to list of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t bytesRead, bytesWritten;
	char buffer[1024];
	int buffer_exceeded = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_msg("Error: Can't read from file ", argv[1], 98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_msg("Error: Can't write to ", argv[2], 99);
	while (buffer_exceeded == 1)
	{
		bytesRead = read(file_from, buffer, 1024);
		if (bytesRead == -1)
			error_msg("Error: Can't read from file ", argv[1], 98);
		bytesWritten = write(file_to, buffer, bytesRead);
		if (bytesWritten == -1)
			error_msg("Error: Can't write to file %s\n", argv[2], 99);
		if (bytesWritten != 1024)
			buffer_exceeded = 0;
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
