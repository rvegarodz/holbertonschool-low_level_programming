#include "main.h"
/**
 * create_file - function that creates a file
 * filename - name of the file to create
 * text_content - text to include in the file
 * Return: 1 if (success) or -1 on (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (text_content != NULL)
		len = strlen(text_content);
	else
		len = 0;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content != NULL)
		write (fd, text_content, len);
	close(fd);
	return (1);
}
