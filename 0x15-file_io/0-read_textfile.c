#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	size_t r, w;

	if (filename == NULL || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r < 1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w < 1)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
