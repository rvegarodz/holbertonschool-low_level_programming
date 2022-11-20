#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append at the end
 * Return: 1 if (success) and -1 on (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
