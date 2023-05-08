#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, ret_value = 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		ret_value = write(fd, text_content, len);
		if (ret_value == -1)
			ret_value = -1;
	}

	if (close(fd) == -1)
		return (-1);

	return (ret_value);
}
