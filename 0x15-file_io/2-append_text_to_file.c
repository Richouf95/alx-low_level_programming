#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: content to be added.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int content_length = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		content_length = 0;
		while (text_content[content_length] != '\0')
			content_length++;

		bytes_written = write(file_descriptor, text_content, content_length);
		if (bytes_written == -1 || bytes_written != content_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
