#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- txt file to be read print to STDOUT.
 * @filename:the read text file
 * @letters: numb of letters to be read
 * Return: w- real number of bytes read;print
 * 0 if fail or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
