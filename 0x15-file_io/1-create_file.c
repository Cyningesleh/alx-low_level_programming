#include "main.h"

/**
 * create_file - To create a file with RDWR access for user
 * @filename: The name of file
 * @text_content: The string to WR to file
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fi, rdstat, i;

	if (filename == NULL)
		return (-1);

	fi = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fi == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rdstat = write(fi, text_content, i);
		if (rdstat == -1)
			return (-1);
	}

	close(fi);
	return (1);
}
