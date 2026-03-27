#include "main.h"
/**
 * append_text_to_file - Appends text_content to file with filename
 * @filename: name of file to have content appended to
 * @text_content: content to be used to append on filename
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		bytesWritten = write(fd, text_content, len);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
