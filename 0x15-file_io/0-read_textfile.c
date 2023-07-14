#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - func that reads a text file and 
 *prints it to the POSIX standard output
 * @filename:the name of the file to read
 * @letters: the numb of letters it should read and print
 *
 * Return: the actual numb of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;
	ssize_t len_r, len_w;
	char *buffer;

	if (filename == NULL)
		return (0);
	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fi);
		return (0);
	}
	len_r = read(fi, buffer, letters);
	close(fi);
	if (len_r == -1)
	{
		free(buffer);
		return (0);
	}
	len_w = write(STDOUT_FILENO, buffer, len_r);
	free(buffer);
	if (len_r != len_w)
		return (0);
	return (len_w);
}
