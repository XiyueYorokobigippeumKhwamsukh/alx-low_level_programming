#include <stdlib.h>
#include "main.h"

/**
  * read_textfile - reads a text file and prints
  * it to the POSIX standard output.
  * @fiename: file to be read
  * @letters: number of the letters to be read
  * Return: w- the actual numbers of bytesread and printed
  * 0- when filename is NULL or the function fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return(w);
}

