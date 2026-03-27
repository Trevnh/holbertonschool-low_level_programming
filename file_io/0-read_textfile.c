#include "main.h"
/**
 * read_textfile - Reads given text file and prints to the POSIX standard
 * output.
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: Returns the number of letters actually read and printed
 * if file could not be opened or read, return 0. If filename is NULL
 * also return 0. If write failes return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytesRead, bytesWritten;

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesWritten);
}
