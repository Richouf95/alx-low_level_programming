#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: content to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int content_length;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	content_length = 0;
	while (text_content[content_length] != '\0')
		content_length++;

	bytes_written = write(file_descriptor, text_content, content_length);
	if (bytes_written == -1 || bytes_written != content_length)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
