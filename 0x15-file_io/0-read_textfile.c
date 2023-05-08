#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
  * read_textfile - reads a text file and prints
  * it to the POSIX standard output.
  * @filename: file to be read
  * @letters: number of the letters to be read
  * Return: bytesRead - the actual numbers of bytesread and printed
  * 0- when filename is NULL or the function fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_read;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	bytes_read = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);

	return (bytes_read);
}
