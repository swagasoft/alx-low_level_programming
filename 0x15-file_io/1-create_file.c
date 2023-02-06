#include "main.h"

/**
 * create_file - creates a file and fills it with characters
 * @filename: name of the file to be created
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;
	w = write(fd, text_content, len);
	if (w < 1)
		return (-1);
	close(fd);
	return (1);
}
