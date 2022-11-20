#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	write (fd, text_content, len);
	close(fd);
	return (1);
	
}
